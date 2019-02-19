/*
    Geist - All purpose text/code editor
    Copyright (C) 2016  Jubal Rosenbarker

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <QApplication>
#include "mainwindow.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName("Cmini");
    a.setOrganizationName("Cmini");

    MainWindow w;
    w.show();
    if(argc > 1){
        w.openWith(QString::fromStdString(argv[1]));
    }
    
    return a.exec();
}
