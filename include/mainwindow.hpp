//
// Created by zerodots on 25-5-30.
//

#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private:
    Ui::MainWindow *ui;

public slots:
    void on_pushButtonConnection_clicked() const;
    void on_pushButtonSwitch_clicked() const;
    void on_pushButtonSteer_clicked() const;
    void on_horizontalSliderRotateSpeedSet_sliderReleased() const;
    void on_lineEditRotateSpeedSet_returnPressed() const;
};


#endif //MAINWINDOW_HPP
