#include "tri.h"
#include "ui_tri.h"

tri::tri(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tri)
{
    ui->setupUi(this);
}

tri::~tri()
{
    delete ui;
}

void tri::on_pushButton_clicked()
{
    /* ui->tableView_affiche->setModel(e.tri_t("Nom","ASC"));*/
}