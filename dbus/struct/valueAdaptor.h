/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp com.scorpio.test.xml -i test.h -a valueAdaptor -l test
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef VALUEADAPTOR_H
#define VALUEADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "test.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.scorpio.test.value
 */
class ValueAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.scorpio.test.value")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.scorpio.test.value\">\n"
"    <method name=\"maxValue\">\n"
"      <arg direction=\"out\" type=\"i\"/>\n"
"    </method>\n"
"    <method name=\"minValue\">\n"
"      <arg direction=\"out\" type=\"i\"/>\n"
"    </method>\n"
"    <method name=\"value\">\n"
"      <arg direction=\"out\" type=\"i\"/>\n"
"    </method>\n"
"    <method name=\"book\">\n"
"      <annotation value=\"Book\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n"
"      <arg direction=\"out\" type=\"(sxs)\" name=\"Book\"/>\n"
"      <arg direction=\"out\" type=\"x\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    ValueAdaptor(test *parent);
    virtual ~ValueAdaptor();

    inline test *parent() const
    { return static_cast<test *>(QObject::parent()); }

public: // PROPERTIES
public Q_SLOTS: // METHODS
    Book book(qlonglong &out1);
    int maxValue();
    int minValue();
    int value();
Q_SIGNALS: // SIGNALS
};

#endif
