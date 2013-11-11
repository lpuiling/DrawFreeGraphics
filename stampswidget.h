#ifndef STAMPSWIDGET_H
#define STAMPSWIDGET_H

#include <QWidget>
#include <QPixmap>
#include <QPainter>
#include <QResizeEvent>
#include <QPushButton>
#include <QHBoxLayout>

class StampsWidget : public QWidget
{
    Q_OBJECT
public:
    explicit StampsWidget(QWidget *parent = 0);

signals:

public slots:

protected:
    void resizeEvent(QResizeEvent *e);
    void paintEvent(QPaintEvent *e);

protected:
    int dim, button_length;
    QHBoxLayout *hLayout;
    void setButtonProperties(QPushButton *b);

private:
    QPixmap *parea;

};

//Select a stamp category
class StampsWidgetCategories : public StampsWidget
{
public:
    explicit StampsWidgetCategories();
    QPushButton *silhouetteButton;
    QPushButton *animalsButton;
    QPushButton *peopleButton;
    QPushButton *buildingsButton;
    QPushButton *sceneryButton;
    QPushButton *facesButton;
    QPushButton *vehiclesButton;
    QPushButton *actionsButton;
    QPushButton *objectsOneButton;
    QPushButton *objectsTwoButton;
    QPushButton *objectsThreeButton;

};

//Stamp Category: Silhouette
class StampsWidgetSilhouette : public StampsWidget
{
public:
    explicit StampsWidgetSilhouette();
    QPushButton *goBack;
    QPushButton *dogStamp;
    QPushButton *catStamp;
    QPushButton *birdStamp;
    QPushButton *turtleStamp;
    QPushButton *ratStamp;
    QPushButton *giraffeStamp;
    QPushButton *alienStamp;
    QPushButton *manStamp;
    QPushButton *womanStamp;
    QPushButton *cameraStamp;
    QPushButton *mailStamp;
    QPushButton *cupStamp;
    QPushButton *giftStamp;
    QPushButton *umbrellaStamp;
    QPushButton *securityCamStamp;
    QPushButton *wrenchStamp;
    QPushButton *heartStamp;
    QPushButton *airplaneStamp;
    QPushButton *helicopterStamp;
    QPushButton *carStamp;
    QPushButton *truckStamp;
    QPushButton *busStamp;
    QPushButton *gasPumpStamp;
    QPushButton *factoryStamp;
    QPushButton *buildingStamp;
    QPushButton *capitolStamp;
    QPushButton *homeStamp;
    QPushButton *sunStamp;
    QPushButton *treeStamp;
    QPushButton *tree2Stamp;
    QPushButton *cloudStamp;
    QPushButton *snowStamp;
    QPushButton *rainStamp;


};

//Stamp Category: Animals
class StampsWidgetAnimals : public StampsWidget
{
public:
    explicit StampsWidgetAnimals();
    QPushButton *goBack;


};

#endif // STAMPSWIDGET_H
