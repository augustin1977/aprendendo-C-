 #include <iostream>
 #include <string>
 
 using namespace std;
 
class Pessoa{
	
	private:
	string nome;
	
	public:
	void setnome(string nomer);
	string getnome();
	
	};
	
	string Pessoa::getnome(){
		return nome;
		}
		
	void Pessoa::setnome(string s){
		nome=s;
		}
	
int main(int argc, char **argv)
{
	Pessoa p1;
	string nome="Eric";
	p1.setnome(nome);
	cout << p1.getnome() << "\n";
	
	return 0;
}
