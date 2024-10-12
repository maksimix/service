#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
  setWindowIcon(QIcon(":/Service/services.png"));
  setWindowTitle("Конфигурация адреса");
  setupUi();
}

void MainWindow::setupUi()
{
  auto group_box = new QGroupBox();
  auto central_widget = new QWidget();
  auto layout = new QGridLayout(group_box);
  
  button_send_ip = new QPushButton("Отправить");
  button_send_ip->setFixedWidth(100);
  button_send_address = new QPushButton("Отправить");
  button_send_address->setFixedWidth(100);
  ip_controller_ = new QLineEdit();
  address_controller_ = new QLineEdit();
  
  layout->addWidget(new QLabel("IP адрес"), 0, 0, 1, 1);
  layout->addWidget(ip_controller_, 0, 2, 1, 1);
  layout->addWidget(button_send_ip, 0, 3, 1, 2);

  layout->addWidget(new QLabel("Адрес: "), 1, 0, 1, 1);
  layout->addWidget(address_controller_, 1, 2, 1, 1);
  layout->addWidget(button_send_address, 1, 3, 1, 2);

  setCentralWidget(group_box);
}


