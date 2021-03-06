#ifndef MYDLG_H
#define MYDLG_H

#include <QDialog>
#include <QBoxLayout>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MyDlg; }
QT_END_NAMESPACE

class MyDlg : public QDialog
{
	Q_OBJECT

public:
	MyDlg(QWidget *parent = nullptr);
	~MyDlg();

private:
	Ui::MyDlg *ui;
	QPushButton *pBtn1, *pBtn2, *pBtn3, *pBtn4, *pBtn5;
	QBoxLayout *pLayout;
};
#endif // MYDLG_H
