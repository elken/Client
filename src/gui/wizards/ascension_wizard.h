#pragma once

#include <QWizard>
#include <QSettings>

class AscensionWizard : public QWizard
{
    Q_OBJECT

public:
    AscensionWizard(QString title = "Project Ascension", QWidget* parent = 0);
    ~AscensionWizard();
    
};



