#ifndef MYPLUGIN_PLUGIN_H
#define MYPLUGIN_PLUGIN_H

#include <QQmlExtensionPlugin>

class MyPluginPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")

public:
    void registerTypes(const char *uri);
};

#endif // MYPLUGIN_PLUGIN_H
