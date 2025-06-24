#ifndef DIALOGCONNECTIONDETAILS_H
#define DIALOGCONNECTIONDETAILS_H

#include "qfixedsizedialog.h"
#include "connectiondetails.h"

namespace Ui {
class DialogConnectionDetails;
}

///
/// \brief The DialogConnectionDetails class
///
class DialogConnectionDetails : public QFixedSizeDialog
{
    Q_OBJECT

public:
    explicit DialogConnectionDetails(ConnectionDetails& cd, QWidget *parent = nullptr);
    ~DialogConnectionDetails();

    void accept() override;

private slots:
    void on_toolButtonExcludeVirtualPorts_toggled(bool checked);
    void on_pushButtonProtocolSelections_clicked();
    void on_comboBoxConnectUsing_currentIndexChanged(int);
    void on_comboBoxFlowControl_currentIndexChanged(int);

private:
    Ui::DialogConnectionDetails *ui;

private:
    ConnectionDetails& _connectionDetails;
};

#endif // DIALOGCONNECTIONDETAILS_H
