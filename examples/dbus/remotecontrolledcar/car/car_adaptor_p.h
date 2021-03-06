/****************************************************************************
**
** Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** No Commercial Usage
** This file contains pre-release code and may not be distributed.
** You may use this file in accordance with the terms and conditions
** contained in the Technology Preview License Agreement accompanying
** this package.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
**
**
**
**
**
**
**
**
** $QT_END_LICENSE$
**
**
** This file was generated by dbusxml2cpp version 0.6
** Command line was: dbusxml2cpp -c CarAdaptor -a car_adaptor_p.h:car_adaptor.cpp car.xml
**
** dbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
**
** This is an auto-generated file.
** This file may have been hand-edited. Look for HAND-EDIT comments
** before re-generating it.
**
****************************************************************************/

#ifndef CAR_ADAPTOR_P_H_1157030132
#define CAR_ADAPTOR_P_H_1157030132

#include <QtCore/QObject>
#include <QtDBus/QtDBus>

QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.trolltech.Examples.CarInterface
 */
class CarAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.trolltech.Examples.CarInterface")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.trolltech.Examples.CarInterface\" >\n"
"    <method name=\"accelerate\" />\n"
"    <method name=\"decelerate\" />\n"
"    <method name=\"turnLeft\" />\n"
"    <method name=\"turnRight\" />\n"
"    <signal name=\"crashed\" />\n"
"  </interface>\n"
        "")
public:
    CarAdaptor(QObject *parent);
    virtual ~CarAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void accelerate();
    void decelerate();
    void turnLeft();
    void turnRight();
Q_SIGNALS: // SIGNALS
    void crashed();
};

#endif
