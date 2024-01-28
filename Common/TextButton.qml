// Copyright (C) 2023 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

import QtQuick 2.9
import QtQuick.Controls 2.5
import QtQuick.Shapes 1.12
import QtCharts 2.3
import QtQuick.Layouts 1.3

Item {
    id: container
    anchors.centerIn: parent

    property alias textDisplay: txtBtnDis.text
    property bool isPressed: false
    signal buttonClicked(bool isPressed)

    Button {
        width: parent.width
        height: parent.height

        background: Rectangle {
            color: "white" // isPressed ? "#dcdcdc" : "white"
            radius: width / 10
            border.color: "#CCCCCC"
            border.width: 1
            Text {
                id: txtBtnDis
                anchors.centerIn: parent
                font.pixelSize: parent.width * 0.35
                color: "black"
                font.weight: Font.DemiBold
            }
            Rectangle {
                anchors.top: parent.top
                anchors.horizontalCenter: parent.horizontalCenter
                width: parent.width * 0.35
                height: parent.height * 0.04
                color: isPressed ? "#eb9534" : "#c9c8c5"
                anchors.topMargin: parent.height * 0.12
                radius: 10
            }
        }

        onClicked: {
            isPressed = !isPressed;
            if (buttonClicked)
                buttonClicked(isPressed)
        }
    }
}


