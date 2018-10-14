﻿#ifndef MORESAMPLERCONFIGSDELEGATE_H
#define MORESAMPLERCONFIGSDELEGATE_H

#include <QObject>
#include <QStyledItemDelegate>
#include <QItemEditorFactory>
#include "moresamplerconfigreader.h"
#include <QComboBox>
#include "moresamplerconfigsmodel.h"
#include <QCheckBox>
class MoresamplerConfigsDelegate : public QStyledItemDelegate
{
public:
    explicit MoresamplerConfigsDelegate(MoresamplerConfigReader* reader,QObject *parent = nullptr);
    QWidget * createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
private:
    MoresamplerConfigReader* reader = nullptr;
};

#endif // MORESAMPLERCONFIGSDELEGATE_H
