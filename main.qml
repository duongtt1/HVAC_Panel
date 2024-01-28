import QtQuick 2.12
import QtQuick.Window 2.12
import "./Components"

Window {
    width: mainScreen.width
    height: mainScreen.height

    visible: true
    title: "HVAC Dashboard"

    Dashboard {
        id: mainScreen
    }

}
