/***********************************************************************
 * Module:  Persona.h
 * Author:  raul2
 * Modified: martes, 20 de junio de 2023 15:29:21
 * Purpose: Declaration of the class Persona
 ***********************************************************************/

#if !defined(__Class_Diagram_2_Persona_h)
#define __Class_Diagram_2_Persona_h

class Fecha;
class Registro;

class Persona
{
public:
   std::string getCedula(void);
   void setCedula(std::string newCedula);
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);
   Persona();
   ~Persona();

   Fecha** fecha;
   Registro** registro;

protected:
private:
   std::string cedula;
   std::string nombre;
   std::string apellido;


};

#endif