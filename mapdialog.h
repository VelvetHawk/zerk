#ifndef MAPDIALOG_H
#define MAPDIALOG_H

#include <QDialog>

namespace Ui {
	class MapDialog;
}

class MapDialog : public QDialog
{
		Q_OBJECT

	public:
		explicit MapDialog(QWidget *parent = 0);
		~MapDialog();

	private slots:
		void on_Done_clicked();

	private:
		Ui::MapDialog *ui;
};

#endif // MAPDIALOG_H
