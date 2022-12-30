class Persona {
   private String nombre; //cambio del metodo
   private String dni;
   String codArea;

   private String numTelefono;
   public:
      void  setNombre(string nombre1){//agregando metodos
         nombre=nombre1;
      }


      String getNombre() {
      return nombre;
   }

   String getDni(){

      return dni;

      }

   String getNumeroTelefono() {
      return codArea + numTelefono;


   }

}

class Empresa {
   String nombre;
   String ruc;
   String codArea;
   String numTelefono;

   public:
   void  setNombre(string nombre2){
         nombre=nombre2;
      }
  
   String getNombre() {
    return nombre;
  }
   String getRuc(){
    return ruc;
  }
   String getNumeroTelefono() {
    return codArea + numTelefono;
  }

}
