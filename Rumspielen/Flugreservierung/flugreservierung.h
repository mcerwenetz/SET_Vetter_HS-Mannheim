#ifndef FLUGRESERVIERUNG_H
#define FLUGRESERVIERUNG_H

#include <QDebug>

class Flugreservierung
{
public:
    enum States{sOhneReservierung, sTeilweiseReserviert, sAusgebucht, sGeschlossen};
private:
    States m_state;
    int m_kapazitaet = 30;
    int m_reserviert = 0;
    int m_frei = m_kapazitaet - m_reserviert;
public:
    Flugreservierung()
    {
        m_state = sOhneReservierung;
    }
    void reservieren(){
        switch (m_state) {
        case sOhneReservierung:
            m_reserviert++;
            break;
        case sTeilweiseReserviert:
            if(m_frei != 0){
                m_reserviert++;
            }else{
                m_state=sAusgebucht;
            }
            break;
        default:
            qDebug() << "Kein Platz mehr" << endl;
        }
    }
    void stornieren(){
        switch (m_state) {
        case sTeilweiseReserviert:
            if(m_reserviert > 0){
                m_reserviert--;
            }else{
                m_state=sOhneReservierung;
            }
            break;
        case sAusgebucht:
            m_reserviert--;
            m_state=sTeilweiseReserviert;
            break;
        default:
            qDebug() << "Alles leer" << endl;
        }
    }
    void schliessen(){
        switch (m_state) {
        case sAusgebucht:
            m_state=sGeschlossen;
            break;
        case sTeilweiseReserviert:
            m_state=sGeschlossen;
        default:
            qDebug() << "Vorgang nicht zulässig" << endl;
        }
    }
    States getState(){
        return m_state;
    }
};

#endif // FLUGRESERVIERUNG_H
