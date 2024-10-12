#pragma once

#include <QtWidgets/QMainWindow>
#include <QFormLayout>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QGroupBox>

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget* parent = nullptr);

private:
  QLineEdit* ip_controller_;
  QLineEdit* address_controller_;
  QPushButton* button_send_ip;
  QPushButton* button_send_address;

private:
  void setupUi();

};

