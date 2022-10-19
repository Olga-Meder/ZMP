#ifndef VECTOR3D_HH
#define VECTOR3D_HH

#include "geomVector.hh"

/*!
 * \file
 * \brief Deklaracja instacji szablonu geom::Vector
 */

 /*!
  * \brief Instacja szablonu geom::Vector<typename,int> dla przestrzeni 3D.
  */
 typedef geom::Vector<double,3>  Vector3D;

/*!
* Nazwy pól klasy są jedynie propozycją i mogą być zmienione
* Nazwy metod są obowiązujące.
*/
class MobileObj {
/*!
* \brief Kąt \e yaw reprezentuje rotację zgodnie z ruchem wskazówek zegara
* wokół osi \e OZ.
*/
    double _Ang_Yaw_deg = 0;
/*!
* \brief Kąt \e pitch reprezentuje rotację zgodnie z ruchem wskazówek zegara
* wokół osi \e OY.
*/
    double _Ang_Pitch_deg = 0;
/*!
* \brief Kąt \e roll reprezentuje rotację zgodnie z ruchem wskazówek zegara
* wokół osi \e OX.
*/
    double _Ang_Roll_deg = 0;
    /*!
* \brief Współrzędne aktualnej pozycji obiektu
*
* Współrzędne aktualnej pozycji obiektu. Przyjmuje się,
* że współrzędne wyrażone są w metrach.
*/
    Vector3D _Position_m;
/*!
* \brief Nazwa obiektu, która go indentyfikuje.
*
* Nazwa obiektu, która go indentyfikuje. Z tego względu musi
* musi to być nazwa unikalna wśród wszystkich obiektów na scenie.
*/
    std::string _Name;
public:
    double GetAng_Roll_deg() const { return _Ang_Roll_deg; }
    double GetAng_Pitch_deg() const { return _Ang_Pitch_deg; }
    double GetAng_Yaw_deg() const { return _Ang_Yaw_deg; }
    void SetAng_Roll_deg(double Ang_Roll_deg) { _Ang_Roll_deg = Ang_Roll_deg; }
    void SetAng_Pitch_deg(double Ang_Pitch_deg) { _Ang_Pitch_deg = Ang_Pitch_deg; }
    void SetAng_Yaw_deg(double Ang_Yaw_deg) { _Ang_Yaw_deg = Ang_Yaw_deg; }
    const Vector3D & GetPositoin_m() const { return _Position_m; }
    void SetPosition_m(const Vector3D &rPos) { _Position = rPos; }
    Vector3D & UsePosition_m() { return _Position_m; }
/*!
* \brief Zmienia nazwę obiektu.
*/
    void SetName(const char* sName) { _Name = sName; }
/*!
* \brief Udostępnia nazwę obiektu.
*/
    const std::string & GetName() const { return _Name; }
};
#endif
