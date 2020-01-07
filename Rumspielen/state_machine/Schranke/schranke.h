#ifndef SCHRANKE_H
#define SCHRANKE_H

#include <QDebug>


class Schranke
{
public:
    enum States{sOffen, sGeschlossen};
private:
    States m_state;

public:
    Schranke(){
        m_state=sGeschlossen;
    }
    void schliessen(){
//        using namespace std;
        switch (m_state) {
        case sOffen:
            qDebug() << "Schranke wird geschlossen" << endl;
            m_state = sGeschlossen;
            break;
        default:
            qDebug() << "Fehler beim Schließen" << endl;
        }
    }
    void oeffnen(){
        switch (m_state) {
        case sGeschlossen:
            qDebug() << "oeffne die Tuer" <<endl;
            m_state = sOffen;
            break;
        default:
            qDebug() << "fehler bein oeffnen" << endl;
        }
    }
    States getState(){
        return m_state;
    }
};

#endif // SCHRANKE_H
