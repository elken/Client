#pragma once

#include "drm_type.h"

class UplayDRM : public DRMType
{
    pt::ptree uplayTree;
    QList<QButtonGroup*> buttonGroupVector;

public:
    void checkExists();
    using DRMType::DRMType;
    void findGames();
    pt::ptree getGames();
    QWidget* createPane(QWidget* parent);
    QList<QButtonGroup*> getButtonGroupVector();
    UplayDRM();
};
