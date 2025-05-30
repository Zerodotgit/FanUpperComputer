//
// Created by zerodots on 25-5-30.
//

#ifndef OPCODE_HPP
#define OPCODE_HPP

// 服务器IP地址和端口号
#define IP_ADDRESS "192.168.31.65"
#define PORT 2345

// ====================socket通信前缀识别码===================
#define COMPLETE "0xFF:"    // 服务器完成客户端指令返回完成响应识别码

// socket连接
#define HELLO_TO_SERVER "0X00:"    // 对应客户端连接请求的识别码
#define HELLO_TO_CLIENT "0X01:"    // 对应服务器连接响应的识别码

// 开关
#define SWITCH_OFF "0x10:"  // 关闭风扇的识别码
#define SWITCH_ON "0x11:";  // 开启风扇的识别码

#endif //OPCODE_HPP
