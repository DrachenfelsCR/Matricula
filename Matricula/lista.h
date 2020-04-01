#ifndef LISTA_H
#define LISTA_H
template<class T>
class lista
{
private:
	nodo<T>* primero;
	nodo <T>* actual;
public:
	lista();
	bool esVacia();
	void insertarInicio(T*);
	void insertarFinal(T*);
	string toString();
	bool buscar(T* aux);
	void eliminarInicio();
	bool eliminarEspecifico(T*);
	~lista();
};
















#endif // !LISTA_H
