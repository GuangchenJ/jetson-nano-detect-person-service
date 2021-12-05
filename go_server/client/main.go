package main

import (
	"context"
	"encoding/json"
	"fmt"
	"log"
	"time"

	"google.golang.org/grpc"

	"go_server/client/defs"
	Detect "go_server/detect_service"
)

func main() {
	// conn, err := grpc.Dial(conf.Basic.RpcNetwork()+":"+conf.Basic.RpcPort(), grpc.WithTransportCredentials(Detect.GetClientCreds()))
	conn, err := grpc.Dial("10.100.214.20:50005", grpc.WithTransportCredentials(Detect.GetClientCreds()))
	if err != nil {
		log.Panicln(err.Error())
	}
	detectResultServiceClient := Detect.NewDetectResultServiceClient(conn)

	ctx := context.Background()

	for {
		resp, err := detectResultServiceClient.DetectedRect(ctx, &Detect.DetectRequest{Status: true})
		if err != nil {
			log.Println(err.Error())
			continue
		}

		r := defs.RpcResponse{DetectResponse: resp}.ToResponse()
		bytes, err := json.Marshal(r.WithoutImg())
		if err != nil {
			log.Println("WithoutImg: ", err.Error())
			return
		}
		fmt.Println(string(bytes))

		time.Sleep(time.Millisecond * 100)
	}
}
