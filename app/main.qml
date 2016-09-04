import QtQuick 2.6
import QtQuick.Controls 1.5
import MyPlugin 1.0

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Module Example")

    MyItem {
        width: 300
        height: 300
        color: "red"
    }
}
