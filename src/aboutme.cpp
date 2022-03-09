#include "includes/aboutme.h"
#include "ui_aboutme.h"

AboutMe::AboutMe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutMe)
{
    ui->setupUi(this);
    QPalette p = ui -> textBrowser -> palette();
    p.setColor(QPalette::Base, "#1e1e1e");
    p.setColor(QPalette::Text, Qt::white);
    ui -> textBrowser -> setPalette(p);

}

AboutMe::~AboutMe()
{
    delete ui;
}
