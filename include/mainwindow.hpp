//
// Created by zerodots on 25-5-30.
//

#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QWidget>
#include <QTcpSocket>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;
    int connectToServer();  // 创建QTcpSocket连接

private:
    Ui::MainWindow *ui;
    QTcpSocket *tcpSocket = nullptr; // 用于TCP连接的套接字

public slots:
    void on_pushButtonConnection_clicked();
    void on_pushButtonSwitch_clicked();
    void on_pushButtonSteer_clicked();
    void on_horizontalSliderRotateSpeedSet_sliderReleased();
    void on_lineEditRotateSpeedSet_returnPressed();
};


#endif //MAINWINDOW_HPP
