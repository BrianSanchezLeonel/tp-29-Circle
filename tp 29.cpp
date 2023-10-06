#include<bits/stdc++.h>
using namespace std;
class CPersona{
	private:
		float altura;
		int edad;
		string nombre;
	public:
		void setAltura(float Altura){
			altura = Altura;
		}
		void setEdad(int Edad){
			edad = Edad;
		}
		void setNombre(string Nombre){
			nombre = Nombre;
		}
		float getAltura(){
			return altura;
		}
		int getEdad(){
			return edad;
		}
		string getNombre(){
			return nombre;
		}
};
int main(){
	float Altura;
	int Edad;
	string Nombre;
	cout<<"Ingrese su nombre:"<<endl;
	cin>>Nombre;
	cout<<"Ingrese su edad:"<<endl;
	cin>>Edad;
	cout<<"Ingrese su Altura:"<<endl;
	cin>>Altura;
	CPersona CLocal;
	CLocal.setAltura(Altura);
	CLocal.setEdad(Edad);
	CLocal.setNombre(Nombre);
	cout<<"Nombre: "<<CLocal.getNombre()<<endl;
	cout<<"Edad: "<<CLocal.getEdad()<<endl;
	cout<<"Altura: "<<CLocal.getAltura()<<endl;
	return 0;
}