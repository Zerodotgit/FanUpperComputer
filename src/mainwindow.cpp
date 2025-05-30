//
// Created by zerodots on 25-5-30.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include "mainwindow.hpp"
#include "ui_mainwindow.h"

int connectionStatus = 0; // 0：未连接，1：已连接
int switchStatus = 0; // 0：关闭，1：开启
int steeringStatus = 1; // 0：反转，1：正转

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

// 连接按钮点击事件处理
void MainWindow::on_pushButtonConnection_clicked() const {
    if (connectionStatus == 0) {
        // 连接逻辑

        // 连接成功，更新状态
        connectionStatus = 1;
        ui->pushButtonConnection->setText("断开连接");
        ui->pushButtonSwitch->setEnabled(true);
        return;
    }
    // 断开连接逻辑

    // 断开连接成功，更新状态
    connectionStatus = 0;
    ui->pushButtonConnection->setText("连接风扇");
    ui->pushButtonSwitch->setEnabled(false);
    ui->pushButtonSteer->setEnabled(false);
    ui->horizontalSliderRotateSpeedSet->setEnabled(false);
    ui->lineEditRotateSpeedSet->setEnabled(false);
    ui->lineEditCurrentRotateSpeed->setEnabled(false);
    ui->horizontalSliderRotateSpeedSet->setValue(0);
    ui->lineEditRotateSpeedSet->setText("0");
    ui->lineEditCurrentRotateSpeed->setText("0");
}

// 开关按钮点击事件处理
void MainWindow::on_pushButtonSwitch_clicked() const {
    // 风扇启动
    if (switchStatus == 0) {

        // 发送信息到服务器，启动风扇

        // 接收服务器响应，更新状态
        ui->pushButtonSwitch->setText("关闭");
        ui->pushButtonSteer->setEnabled(true);
        ui->horizontalSliderRotateSpeedSet->setEnabled(true);
        ui->lineEditRotateSpeedSet->setEnabled(true);
        ui->horizontalSliderRotateSpeedSet->setValue(25);
        ui->lineEditRotateSpeedSet->setText("25");
        switchStatus = 1;

        return;
    }

    // 风扇关闭
    // 发送信息到服务器，关闭风扇

    // 接收服务器响应，更新状态
    ui->pushButtonSwitch->setText("开启");
    ui->pushButtonSteer->setEnabled(false);
    ui->horizontalSliderRotateSpeedSet->setEnabled(false);
    ui->lineEditRotateSpeedSet->setEnabled(false);
    ui->horizontalSliderRotateSpeedSet->setValue(0);
    ui->lineEditRotateSpeedSet->setText("0");
    switchStatus = 0;
}

// 旋转方向按钮点击事件处理
void MainWindow::on_pushButtonSteer_clicked() const {
    // 发送转动方向状态查询请求，获得风扇当前转动方向

    // 正转方向时
    if (steeringStatus == 1) {
        // 发送信息到服务器，设置风扇为反转

        // 接收服务器响应，更新状态
        ui->pushButtonSteer->setText("反转");
        steeringStatus = 0;
        return;
    }

    // 反转方向时
    // 发送信息到服务器，设置风扇为正转

    // 接收服务器响应，更新状态
    ui->pushButtonSteer->setText("正转");
    steeringStatus = 1;
}

// 旋转速度滑动条释放事件处理
void MainWindow::on_horizontalSliderRotateSpeedSet_sliderReleased() const {
    // 获取滑动条值
    int value = ui->horizontalSliderRotateSpeedSet->value();
    ui->lineEditRotateSpeedSet->setText(QString::number(value));
    std::string rotateSpeed = std::to_string(value);

    // 发送旋转速度到服务器

    // 接收服务器响应，更新当前旋转速度显示

}

// 旋转速度设置输入框回车事件处理
void MainWindow::on_lineEditRotateSpeedSet_returnPressed() const {
    // 获取输入框值
    QString qRotateSpeed = ui->lineEditRotateSpeedSet->text();
    ui->horizontalSliderRotateSpeedSet->setValue(qRotateSpeed.toInt());
    std::string rotateSpeed = qRotateSpeed.toStdString();

    // 发送旋转速度到服务器

    // 接收服务器响应，更新当前旋转速度显示
}