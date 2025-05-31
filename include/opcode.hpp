//
// Created by zerodots on 25-5-30.
//

#ifndef OPCODE_HPP
#define OPCODE_HPP

// 服务器IP地址和端口号
#define IP_ADDRESS "192.168.31.65"
#define PORT 2345

// ====================socket通信前缀识别码===================
#define COMPLETE "0XFF:"    // 服务器完成客户端指令返回完成响应识别码

// socket连接
#define HELLO_TO_SERVER "0X00:"    // 对应客户端连接请求的识别码
#define HELLO_TO_CLIENT "0X01:"    // 对应服务器连接响应的识别码

// 开关
#define SWITCH_OFF "0X10:"  // 关闭风扇的识别码
#define SWITCH_ON "0X11:"  // 开启风扇的识别码

// 转动方向
#define FORWARD "0X20:"  // 正转的识别码
#define REVERSE "0X21:" // 反转的识别码

// 转速
#define SPEED "0X30:"  // 设置转速的识别码

#endif //OPCODE_HPP
