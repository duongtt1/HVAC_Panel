import QtQuick 2.9
import "../Common"
import "../js/utils.js" as Utils

Item {
    id: button_control
    AutoButton {
        id: autoButtonID
        x: 12
        y: 11
        width: 85
        height: 85
        anchors.verticalCenterOffset: 0
        anchors.horizontalCenterOffset: -251
    }

    TextButton {
        id: customButton1
        x: 109
        y: 11
        width: 85
        height: 85
        anchors.verticalCenterOffset: 0
        anchors.horizontalCenterOffset: -154
        textDisplay: "SYNC"
    }

    TextButton {
        id: customButton2
        x: 208
        y: 11
        width: 85
        height: 85
        anchors.verticalCenterOffset: 0
        anchors.horizontalCenterOffset: -55
        textDisplay: "A/C"
    }

    IconButton {
        id: customButton3
        x: 307
        y: 11
        width: 85
        height: 85
        anchors.verticalCenterOffset: 0
        anchors.horizontalCenterOffset: 44
    }

    IconButton {
        id: customButton4
        x: 503
        y: 13
        width: 85
        height: 85
        anchors.verticalCenterOffset: 2
        anchors.horizontalCenterOffset: 240
        urlIcon: Utils.getUrlImg("rrdefog.png")
    }

    IconButton {
        id: customButton5
        x: 405
        y: 11
        width: 85
        height: 85
        anchors.verticalCenterOffset: 0
        anchors.horizontalCenterOffset: 142
        urlIcon: Utils.getUrlImg("autodefog.png")
    }
}
