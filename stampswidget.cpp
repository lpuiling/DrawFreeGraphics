#include "stampswidget.h"

// STAMPS WIDGET
StampsWidget::StampsWidget(QWidget *parent) :
    QWidget(parent)
{

    int h = this->size().height();
    int w = this->size().width();
    parea = new QPixmap(w,h);
    parea->fill(QColor(229,255,204));

    dim = 60;
    button_length = 200;

}

void StampsWidget::resizeEvent(QResizeEvent *e)
{
    int h = e->size().height();
    int w = e->size().width();
    QPixmap temp = this->parea->copy();
    parea = new QPixmap(w,h);
    *parea = temp.scaled(w,h);
}

void StampsWidget::paintEvent(QPaintEvent *e)
{
    if(parea != NULL) {
        QPainter painter(this);
        painter.drawPixmap(0,0,*parea);
    }
}

void StampsWidget::setButtonProperties(QPushButton *b)
{
    b->setFixedWidth(button_length);
    b->setFixedHeight(dim);
    hLayout->addWidget(b);
}


// STAMPS WIDGET CATEGORIES
StampsWidgetCategories::StampsWidgetCategories()
{
    hLayout = new QHBoxLayout;

    silhouetteButton = new QPushButton("Solid Color Buttons");
    setButtonProperties(silhouetteButton);
    animalsButton = new QPushButton("Animals");
    setButtonProperties(animalsButton);
    peopleButton = new QPushButton("People");
    setButtonProperties(peopleButton);
    buildingsButton = new QPushButton("Buildings");
    setButtonProperties(buildingsButton);
    sceneryButton = new QPushButton("Scenery");
    setButtonProperties(sceneryButton);
    facesButton = new QPushButton("Faces");
    setButtonProperties(facesButton);
    vehiclesButton = new QPushButton("Vehicles");
    setButtonProperties(vehiclesButton);
    actionsButton = new QPushButton("Actions");
    setButtonProperties(actionsButton);
    objectsOneButton = new QPushButton("Objects 1");
    setButtonProperties(objectsOneButton);
    objectsTwoButton = new QPushButton("Objects 2");
    setButtonProperties(objectsTwoButton);
    objectsThreeButton = new QPushButton("Objects 3");
    setButtonProperties(objectsThreeButton);

    QSpacerItem *horizSpacer = new QSpacerItem(0,0,QSizePolicy::Expanding, QSizePolicy::Minimum);
    hLayout->addSpacerItem(horizSpacer);
    this->setLayout(hLayout);
}


// STAMPS WIDGET SILHOUETTE
StampsWidgetSilhouette::StampsWidgetSilhouette()
{
    hLayout = new QHBoxLayout;
    button_length = 60;

    goBack = new QPushButton(QIcon(":/Icons/Icons/undo.png"), tr(""));
    setButtonProperties(goBack);
    dogStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/dog_stamp.png"), tr(""));
    setButtonProperties(dogStamp);
    catStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/cat_stamp.png"), tr(""));
    setButtonProperties(catStamp);
    birdStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/bird_stamp.png"), tr(""));
    setButtonProperties(birdStamp);
    turtleStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/turtle_stamp.png"), tr(""));
    setButtonProperties(turtleStamp);
    ratStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/rat_stamp.png"), tr(""));
    setButtonProperties(ratStamp);
    giraffeStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/giraffe_stamp.png"), tr(""));
    setButtonProperties(giraffeStamp);
    alienStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/alien_stamp.png"), tr(""));
    setButtonProperties(alienStamp);
    manStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/man_stamp.png"), tr(""));
    setButtonProperties(manStamp);
    womanStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/woman_stamp.png"), tr(""));
    setButtonProperties(womanStamp);
    cameraStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/camera_stamp.png"), tr(""));
    setButtonProperties(cameraStamp);
    mailStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/mail_stamp.png"), tr(""));
    setButtonProperties(mailStamp);
    cupStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/cup_stamp.png"), tr(""));
    setButtonProperties(cupStamp);
    giftStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/gift_stamp.png"), tr(""));
    setButtonProperties(giftStamp);
    umbrellaStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/umbrella_stamp.png"), tr(""));
    setButtonProperties(umbrellaStamp);
    securityCamStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/security_cam_stamp.png"), tr(""));
    setButtonProperties(securityCamStamp);
    wrenchStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/wrench_stamp.png"), tr(""));
    setButtonProperties(wrenchStamp);
    heartStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/heart_stamp.png"), tr(""));
    setButtonProperties(heartStamp);
    airplaneStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/airplane_stamp.png"), tr(""));
    setButtonProperties(airplaneStamp);
    helicopterStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/helicopter_stamp.png"), tr(""));
    setButtonProperties(helicopterStamp);
    carStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/car_stamp.png"), tr(""));
    setButtonProperties(carStamp);
    truckStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/truck_stamp.png"), tr(""));
    setButtonProperties(truckStamp);
    busStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/bus_stamp.png"), tr(""));
    setButtonProperties(busStamp);
    gasPumpStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/gas_pump_stamp.png"), tr(""));
    setButtonProperties(gasPumpStamp);
    factoryStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/factory_stamp.png"), tr(""));
    setButtonProperties(factoryStamp);
    buildingStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/building_stamp.png"), tr(""));
    setButtonProperties(buildingStamp);
    capitolStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/capitol_stamp.png"), tr(""));
    setButtonProperties(capitolStamp);
    homeStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/home_stamp.png"), tr(""));
    setButtonProperties(homeStamp);
    sunStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/sun_stamp.png"), tr(""));
    setButtonProperties(sunStamp);
    treeStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/tree_stamp.png"), tr(""));
    setButtonProperties(treeStamp);
    tree2Stamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/tree2_stamp.png"), tr(""));
    setButtonProperties(tree2Stamp);
    cloudStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/cloud_stamp.png"), tr(""));
    setButtonProperties(cloudStamp);
    snowStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/snow_stamp.png"), tr(""));
    setButtonProperties(snowStamp);
    rainStamp = new QPushButton(QIcon(":/Stamps/solidcolorstamps/Stamps/rain_stamp.png"), tr(""));
    setButtonProperties(rainStamp);

    QSpacerItem *horizSpacer = new QSpacerItem(0,0,QSizePolicy::Expanding, QSizePolicy::Minimum);
    hLayout->addSpacerItem(horizSpacer);
    this->setLayout(hLayout);

}


// STAMPS WIDGET ANIMALS
StampsWidgetAnimals::StampsWidgetAnimals()
{
    hLayout = new QHBoxLayout;
    button_length = 60;

    goBack = new QPushButton(QIcon(":/Icons/Icons/undo.png"), tr(""));
    setButtonProperties(goBack);
    bearStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_bear_stamp.png"), tr(""));
    setButtonProperties(bearStamp);
    beeStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_bee_stamp.png"), tr(""));
    setButtonProperties(beeStamp);
    birdStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_bird_stamp.png"), tr(""));
    setButtonProperties(birdStamp);
    bullStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_bull_stamp.png"), tr(""));
    setButtonProperties(bullStamp);
    catStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_cat_stamp.png"), tr(""));
    setButtonProperties(catStamp);
    cowStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_cow_stamp.png"), tr(""));
    setButtonProperties(cowStamp);
    crabStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_crab_stamp.png"), tr(""));
    setButtonProperties(crabStamp);
    crocodileStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_crocodile_stamp.png"), tr(""));
    setButtonProperties(crocodileStamp);
    deerStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_deer_stamp.png"), tr(""));
    setButtonProperties(deerStamp);
    dogStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_dog_stamp.png"), tr(""));
    setButtonProperties(dogStamp);
    donkeyStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_donkey_stamp.png"), tr(""));
    setButtonProperties(donkeyStamp);
    eagleStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_eagle_stamp.png"), tr(""));
    setButtonProperties(eagleStamp);
    elephantStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_elephant_stamp.png"), tr(""));
    setButtonProperties(elephantStamp);
    foxStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_fox_stamp.png"), tr(""));
    setButtonProperties(foxStamp);
    giraffeStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_giraffe_stamp.png"), tr(""));
    setButtonProperties(giraffeStamp);
    gorillaStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_gorilla_stamp.png"), tr(""));
    setButtonProperties(gorillaStamp);
    hippoStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_hippo_stamp.png"), tr(""));
    setButtonProperties(hippoStamp);
    horseStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_horse_stamp.png"), tr(""));
    setButtonProperties(horseStamp);
    lionStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_lion_stamp.png"), tr(""));
    setButtonProperties(lionStamp);
    monkeyStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_monkey_stamp.png"), tr(""));
    setButtonProperties(monkeyStamp);
    mooseStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_moose_stamp.png"), tr(""));
    setButtonProperties(mooseStamp);
    mouseStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_mouse_stamp.png"), tr(""));
    setButtonProperties(mouseStamp);
    owlStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_owl_stamp.png"), tr(""));
    setButtonProperties(owlStamp);
    pandaStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_panda_stamp.png"), tr(""));
    setButtonProperties(pandaStamp);
    penguinStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_penguin_stamp.png"), tr(""));
    setButtonProperties(penguinStamp);
    pigStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_pig_stamp.png"), tr(""));
    setButtonProperties(pigStamp);
    rabbitStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_rabbit_stamp.png"), tr(""));
    setButtonProperties(rabbitStamp);
    rhinoStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_rhino_stamp.png"), tr(""));
    setButtonProperties(rhinoStamp);
    roosterStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_rooster_stamp.png"), tr(""));
    setButtonProperties(roosterStamp);
    sheepStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_sheep_stamp.png"), tr(""));
    setButtonProperties(sheepStamp);
    snakeStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_snake_stamp.png"), tr(""));
    setButtonProperties(snakeStamp);
    turkeyStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_turkey_stamp.png"), tr(""));
    setButtonProperties(turkeyStamp);
    wolfStamp = new QPushButton(QIcon(":/Stamps/animals/Stamps/animal_wolf_stamp.png"), tr(""));
    setButtonProperties(wolfStamp);


    QSpacerItem *horizSpacer = new QSpacerItem(0,0,QSizePolicy::Expanding, QSizePolicy::Minimum);
    hLayout->addSpacerItem(horizSpacer);
    this->setLayout(hLayout);

}

// STAMPS WIDGET BUILDINGS
StampsWidgetBuildings::StampsWidgetBuildings()
{
    hLayout = new QHBoxLayout;
    button_length = 60;

    goBack = new QPushButton(QIcon(":/Icons/Icons/undo.png"), tr(""));
    setButtonProperties(goBack);
    homeOneStamp = new QPushButton(QIcon(":/Stamps/buildings/Stamps/buildings_home_one_stamp.png"), tr(""));
    setButtonProperties(homeOneStamp);
    homeTwoStamp = new QPushButton(QIcon(":/Stamps/buildings/Stamps/buildings_home_two_stamp.png"), tr(""));
    setButtonProperties(homeTwoStamp);
    homeThreeStamp = new QPushButton(QIcon(":/Stamps/buildings/Stamps/buildings_home_three_stamp.png"), tr(""));
    setButtonProperties(homeThreeStamp);
    homeFourStamp = new QPushButton(QIcon(":/Stamps/buildings/Stamps/buildings_home_four_stamp.png"), tr(""));
    setButtonProperties(homeFourStamp);
    bankStamp = new QPushButton(QIcon(":/Stamps/buildings/Stamps/buildings_bank_stamp.png"), tr(""));
    setButtonProperties(bankStamp);
    schoolStamp = new QPushButton(QIcon(":/Stamps/buildings/Stamps/buildings_school_stamp.png"), tr(""));
    setButtonProperties(schoolStamp);
    hospitalStamp = new QPushButton(QIcon(":/Stamps/buildings/Stamps/buildings_hospital_stamp.png"), tr(""));
    setButtonProperties(hospitalStamp);
    skyscraperStamp = new QPushButton(QIcon(":/Stamps/buildings/Stamps/buildings_skyscraper_stamp.png"), tr(""));
    setButtonProperties(skyscraperStamp);
    buildingStamp = new QPushButton(QIcon(":/Stamps/buildings/Stamps/buildings_building_stamp.png"), tr(""));
    setButtonProperties(buildingStamp);
    multiplexStamp = new QPushButton(QIcon(":/Stamps/buildings/Stamps/buildings_multiplex_stamp.png"), tr(""));
    setButtonProperties(multiplexStamp);
    shopOneStamp = new QPushButton(QIcon(":/Stamps/buildings/Stamps/buildings_shop_one_stamp.png"), tr(""));
    setButtonProperties(shopOneStamp);
    shopTwoStamp = new QPushButton(QIcon(":/Stamps/buildings/Stamps/buildings_shop_two_stamp.png"), tr(""));
    setButtonProperties(shopTwoStamp);
    shopThreeStamp = new QPushButton(QIcon(":/Stamps/buildings/Stamps/buildings_shop_three_stamp.png"), tr(""));
    setButtonProperties(shopThreeStamp);
    shopFourStamp = new QPushButton(QIcon(":/Stamps/buildings/Stamps/buildings_shop_four_stamp.png"), tr(""));
    setButtonProperties(shopFourStamp);
    castleStamp = new QPushButton(QIcon(":/Stamps/buildings/Stamps/buildings_castle_stamp.png"), tr(""));
    setButtonProperties(castleStamp);

    QSpacerItem *horizSpacer = new QSpacerItem(0,0,QSizePolicy::Expanding, QSizePolicy::Minimum);
    hLayout->addSpacerItem(horizSpacer);
    this->setLayout(hLayout);

}

// STAMPS WIDGET SCENERY
StampsWidgetScenery::StampsWidgetScenery()
{
    hLayout = new QHBoxLayout;
    button_length = 60;

    goBack = new QPushButton(QIcon(":/Icons/Icons/undo.png"), tr(""));
    setButtonProperties(goBack);
    palmTreeStamp = new QPushButton(QIcon(":/Stamps/scenery/Stamps/scenery_palm_tree_stamp.png"), tr(""));
    setButtonProperties(palmTreeStamp);
    treeOneStamp = new QPushButton(QIcon(":/Stamps/scenery/Stamps/scenery_tree_one_stamp.png"), tr(""));
    setButtonProperties(treeOneStamp);
    treeTwoStamp = new QPushButton(QIcon(":/Stamps/scenery/Stamps/scenery_tree_two_stamp.png"), tr(""));
    setButtonProperties(treeTwoStamp);
    christmasTreeStamp = new QPushButton(QIcon(":/Stamps/scenery/Stamps/scenery_christmas_tree_stamp.png"), tr(""));
    setButtonProperties(christmasTreeStamp);
    sunStamp = new QPushButton(QIcon(":/Stamps/scenery/Stamps/scenery_sun_stamp.png"), tr(""));
    setButtonProperties(sunStamp);
    moonStamp = new QPushButton(QIcon(":/Stamps/scenery/Stamps/scenery_moon_stamp.png"), tr(""));
    setButtonProperties(moonStamp);
    cloudStamp = new QPushButton(QIcon(":/Stamps/scenery/Stamps/scenery_cloud_stamp.png"), tr(""));
    setButtonProperties(cloudStamp);
    stormyCloudStamp = new QPushButton(QIcon(":/Stamps/scenery/Stamps/scenery_stormy_cloud_stamp.png"), tr(""));
    setButtonProperties(stormyCloudStamp);
    starsStamp = new QPushButton(QIcon(":/Stamps/scenery/Stamps/scenery_stars_stamp.png"), tr(""));
    setButtonProperties(starsStamp);
    balloonStamp = new QPushButton(QIcon(":/Stamps/scenery/Stamps/scenery_balloon_stamp.png"), tr(""));
    setButtonProperties(balloonStamp);
    flowerOneStamp = new QPushButton(QIcon(":/Stamps/scenery/Stamps/scenery_flower_one_stamp.png"), tr(""));
    setButtonProperties(flowerOneStamp);
    flowerTwoStamp = new QPushButton(QIcon(":/Stamps/scenery/Stamps/scenery_flower_two_stamp.png"), tr(""));
    setButtonProperties(flowerTwoStamp);
    flowerThreeStamp = new QPushButton(QIcon(":/Stamps/scenery/Stamps/scenery_flower_three_stamp.png"), tr(""));
    setButtonProperties(flowerThreeStamp);
    bouquetStamp = new QPushButton(QIcon(":/Stamps/scenery/Stamps/scenery_bouquet_stamp.png"), tr(""));
    setButtonProperties(bouquetStamp);
    statueStamp = new QPushButton(QIcon(":/Stamps/scenery/Stamps/scenery_statue_stamp.png"), tr(""));
    setButtonProperties(statueStamp);

    QSpacerItem *horizSpacer = new QSpacerItem(0,0,QSizePolicy::Expanding, QSizePolicy::Minimum);
    hLayout->addSpacerItem(horizSpacer);
    this->setLayout(hLayout);



}

