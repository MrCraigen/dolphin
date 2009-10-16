/***************************************************************************
 *   Copyright (C) 2008 by Sebastian Trueg <trueg@kde.org>                 *
 *   Copyright (C) 2009 by Peter Penz <peter.penz@gmx.at>                  *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA            *
 ***************************************************************************/

#ifndef COMMENT_WIDGET
#define COMMENT_WIDGET

#include <QString>
#include <QWidget>

class QLabel;

class CommentWidget : public QWidget
{
    Q_OBJECT

public:
    CommentWidget(QWidget* parent);
    virtual ~CommentWidget();

    void setText(const QString& comment);
    QString text() const;

signals:
    void commentChanged(const QString& comment);

private slots:
    void slotLinkActivated(const QString& link);

private:
    QLabel* m_label;
    QString m_comment;
};

#endif