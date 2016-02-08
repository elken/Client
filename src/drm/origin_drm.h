#pragma once

#include "drm_type.h"

class OriginDRM : public DRMType
{
    pt::ptree originTree;
    QList<QButtonGroup*> buttonGroupVector;

public:
    void checkExists();
    using DRMType::DRMType;
    QWidget* createPane(QWidget* parent);
    void findGames();
    pt::ptree getGames();
    QList<QButtonGroup*> getButtonGroupVector();
    OriginDRM();
};
