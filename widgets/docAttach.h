/*
 * This file is part of the xTuple ERP: PostBooks Edition, a free and
 * open source Enterprise Resource Planning software suite,
 * Copyright (c) 1999-2014 by OpenMFG LLC, d/b/a xTuple.
 * It is licensed to you under the Common Public Attribution License
 * version 1.0, the full text of which (including xTuple-specific Exhibits)
 * is available at www.xtuple.com/CPAL.  By using this software, you agree
 * to be bound by its terms.
 */

#ifndef DOCATTACH_H
#define DOCATTACH_H

#include "documents.h"
#include "ui_docAttach.h"

class docAttachPrivate;

class docAttach : public QDialog, public Ui::docAttach
{
    Q_OBJECT

public:
    docAttach(QWidget* parent = 0, const char* name = 0, bool modal = false, Qt::WindowFlags fl = 0);
    ~docAttach();

    QPushButton* _save;

public slots:
    virtual void set( const ParameterList & pParams );
    virtual void sFileList();
    virtual void sHandleButtons();
    virtual void sSave();
    virtual void sHandleNewId(int);

protected slots:
    virtual void languageChange();

private:
    int _sourceid;
    QString _sourcetype;
    int _targetid;
    int _urlid;
    QString _targettype;
    QString _purpose;
    QString _mode;
    docAttachPrivate *_p;
};

#endif // docAttach_H
