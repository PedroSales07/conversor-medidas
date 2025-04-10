/*
//------------// Créditos //----------//
Desenvolvedor:   Pedro Paulo Dias Sales
Data de Criação: 07/04/2025 
Contatos: 
Email    -       pedrosalesmcd@gmail.com
Github   -       github.com/PedroSales07
Wpp      -       (21) 96865-6996
Descrição:
	        Ferramenta abrangente para conversão entre        
            diversas unidades de medida em múltiplas          
            categorias, incluindo comprimento, massa,        
            temperatura, tempo, área, volume, velocidade,    
            pressão, energia e frequência. 
	
			Funcionalidades:
			- Interface intuitiva e organizada por categorias 
			- Modo escuro/claro (alternância F2)
			- Precisão de cálculos com até 6 casas decimais 
			- Código modular e de fácil manutenção 
*/

#include<iostream>
#include<locale.h>
#include <iomanip>
#include <map>
#include<string>
#include<cmath>

using namespace std;
bool modo_escuro = true;

void mudar_modo(){
    modo_escuro=!modo_escuro;
    cout<<(modo_escuro?"\033[40m\033[37m":"\033[107m\033[30m");
    system("cls");
}


void comprimento(){
	system("cls");
	string x,y;
	float metro, resultado, valor;
	cout<<"CONVERSOR DE UNIDADES DE COMPRIMENTO"<<endl;
    cout<<"___________________________________"<<endl;
    cout<<"Unidades disponíveis:"<<endl;
    cout<<"nm  - Nanômetro"<<endl;
    cout<<"um  - Micrômetro"<<endl;
    cout<<"mm  - Milímetro"<<endl;
    cout<<"cm  - Centímetro"<<endl;
    cout<<"dm  - Decímetro"<<endl;
    cout<<"m   - Metro"<<endl;
    cout<<"dam - Decâmetro"<<endl;
    cout<<"hm  - Hectômetro"<<endl;
    cout<<"km  - Quilômetro"<<endl;
    cout<<"mi  - Milha"<<endl;
    cout<<"ft  - Pé"<<endl;
    cout<<"in  - Polegada"<<endl;
    cout<<"yd  - Jarda"<<endl<<endl;
    cout<<"Utilize as siglas"<<endl;
    cout<<"De: "; cin>>x;
    cout<<"Para: "; cin>>y;
    cout<<"Valor: "; cin>>valor;
    
    if(x == "nm")       metro = valor * 0.000000001;
    else if(x == "um")  metro = valor * 0.000001;
    else if(x == "mm")  metro = valor * 0.001;
    else if(x == "cm")  metro = valor * 0.01;
    else if(x == "dm")  metro = valor * 0.1;
    else if(x == "m")   metro = valor * 1.0;
    else if(x == "dam") metro = valor * 10.0;
    else if(x == "hm")  metro = valor * 100.0;
    else if(x == "km")  metro = valor * 1000.0;
    else if(x == "mi")  metro = valor * 1609.34;
    else if(x == "ft")  metro = valor * 0.3048;
    else if(x == "in")  metro = valor * 0.0254;
    else if(x == "yd")  metro = valor * 0.9144;
    else{
        cout<<"Opção inválida!"<<endl;
        system("pause");
        return;   
    }
    
    if(y == "nm")       resultado = metro / 0.000000001;
    else if(y == "um")  resultado = metro / 0.000001;
    else if(y == "mm")  resultado = metro / 0.001;
    else if(y == "cm")  resultado = metro / 0.01;
    else if(y == "dm")  resultado = metro / 0.1;
    else if(y == "m")   resultado = metro / 1.0;
    else if(y == "dam") resultado = metro / 10.0;
    else if(y == "hm")  resultado = metro / 100.0;
    else if(y == "km")  resultado = metro / 1000.0;
    else if(y == "mi")  resultado = metro / 1609.34;
    else if(y == "ft")  resultado = metro / 0.3048;
    else if(y == "in")  resultado = metro / 0.0254;
    else if(y == "yd")  resultado = metro / 0.9144;
    else{
        cout<<"Opção inválida!"<<endl;
        system("pause");
        return;
    }
    
    cout<<fixed<<setprecision(2);
    cout<<endl<<"RESULTADO: "<<valor<<" "<<x<<" = "<<resultado<<" "<<y<<endl;
    system("pause");   
}

void massa() {
    system("cls");
    string x, y;
    float quilograma, resultado, valor;
    
    cout<<"CONVERSOR DE UNIDADES DE MASSA"<<endl;
    cout<<"______________________________"<<endl;
    cout<<"Unidades disponíveis:"<<endl;
    cout<<"mg  - Miligrama" <<endl;
    cout<<"cg  - Centigrama"<<endl;
    cout<<"dg  - Decigrama"<<endl;
    cout<<"g   - Grama"<<endl;
    cout<<"dag - Decagrama"<<endl;
    cout<<"hg  - Hectograma"<<endl;
    cout<<"kg  - Quilograma"<<endl;
    cout<<"t   - Tonelada"<<endl;
    cout<<"oz  - Onça"<<endl;
    cout<<"lb  - Libra"<<endl;
    cout<<"st  - Stone"<<endl<<endl;
    cout<<"Utilize as siglas"<<endl;
    
    cout<<"De: "; cin>>x;
    cout<<"Para: "; cin>>y;
    cout<<"Valor: "; cin>>valor;
    
    if(x == "mg")       quilograma = valor * 0.000001;
    else if(x == "cg")  quilograma = valor * 0.00001;
    else if(x == "dg")  quilograma = valor * 0.0001;
    else if(x == "g")   quilograma = valor * 0.001;
    else if(x == "dag") quilograma = valor * 0.01;
    else if(x == "hg")  quilograma = valor * 0.1;
    else if(x == "kg")  quilograma = valor * 1.0;
    else if(x == "t")   quilograma = valor * 1000.0;
    else if(x == "oz")  quilograma = valor * 0.0283495;
    else if(x == "lb")  quilograma = valor * 0.453592;
    else if(x == "st")  quilograma = valor * 6.35029;
    else{
        cout << "Opção inválida!" << endl;
        system("pause");
        return;
    }
    
    if(y == "mg")       resultado = quilograma / 0.000001;
    else if(y == "cg")  resultado = quilograma / 0.00001;
    else if(y == "dg")  resultado = quilograma / 0.0001;
    else if(y == "g")   resultado = quilograma / 0.001;
    else if(y == "dag") resultado = quilograma / 0.01;
    else if(y == "hg")  resultado = quilograma / 0.1;
    else if(y == "kg")  resultado = quilograma / 1.0;
    else if(y == "t")   resultado = quilograma / 1000.0;
    else if(y == "oz")  resultado = quilograma / 0.0283495;
    else if(y == "lb")  resultado = quilograma / 0.453592;
    else if(y == "st")  resultado = quilograma / 6.35029;
    else{
        cout<<"Opção inválida!"<<endl;
        system("pause");
        return;
    }
    cout<<fixed<<setprecision(3);
    cout<<endl<<"RESULTADO: "<<valor<<" "<<x<<" = "<<resultado<<" "<<y<<endl;
    system("pause");
}

void tempo() {
    system("cls");
    string x, y;
    float segundo, resultado, valor;
    
    cout<<"CONVERSOR DE UNIDADES DE TEMPO"<<endl;
    cout<<"______________________________"<<endl;
    cout<<"Unidades disponíveis:"<<endl;
    cout<<"ns  - Nanosegundo"<<endl;
    cout<<"µs  - Microsegundo"<<endl;
    cout<<"ms  - Milissegundo"<<endl;
    cout<<"s   - Segundo"<<endl;
    cout<<"min - Minuto"<<endl;
    cout<<"h   - Hora"<<endl;
    cout<<"d   - Dia"<<endl;
    cout<<"sem - Semana"<<endl;
    cout<<"mes - Mês (30 dias)"<<endl;
    cout<<"ano - Ano (365 dias)"<<endl<<endl;
    cout<<"Utilize as siglas"<<endl;
    
    cout<<"De: "; cin>>x;
    cout<<"Para: "; cin>>y;
    cout<<"Valor: "; cin>>valor;
    
    if(x == "ns")       segundo = valor * 0.000000001;
    else if(x == "µs")  segundo = valor * 0.000001;
    else if(x == "ms")  segundo = valor * 0.001;
    else if(x == "s")   segundo = valor * 1.0;
    else if(x == "min") segundo = valor * 60.0;
    else if(x == "h")   segundo = valor * 3600.0;
    else if(x == "d")   segundo = valor * 86400.0;
    else if(x == "sem") segundo = valor * 604800.0;
    else if(x == "mes") segundo = valor * 2592000.0;
    else if(x == "ano") segundo = valor * 31536000.0;
    else{
        cout<<"Opção inválida!"<<endl;
        system("pause");
        return;
    }
    
    if(y == "ns")       resultado = segundo / 0.000000001;
    else if(y == "µs")  resultado = segundo / 0.000001;
    else if(y == "ms")  resultado = segundo / 0.001;
    else if(y == "s")   resultado = segundo / 1.0;
    else if(y == "min") resultado = segundo / 60.0;
    else if(y == "h")   resultado = segundo / 3600.0;
    else if(y == "d")   resultado = segundo / 86400.0;
    else if(y == "sem") resultado = segundo / 604800.0;
    else if(y == "mes") resultado = segundo / 2592000.0;
    else if(y == "ano") resultado = segundo / 31536000.0;
    else{
        cout<<"Opção inválida!"<<endl;
        system("pause");
        return;
    }
    
    cout<<fixed<<setprecision(2);
    cout<<endl<<"RESULTADO: "<<valor<<" "<<x<<" = "<<resultado<<" "<<y<<endl;
    system("pause");
}

void temperatura() {
    system("cls");
    string x, y;
    float celsius, resultado, valor;
    
    cout<<"CONVERSOR DE UNIDADES DE TEMPERATURA"<<endl;
    cout<<"___________________________________"<<endl;
    cout<<"Unidades disponíveis:"<<endl;
    cout<<"C - Celsius"<<endl;
    cout<<"F - Fahrenheit"<<endl;
    cout<<"K - Kelvin"<<endl<<endl;
    cout<<"Utilize as siglas"<<endl;
    
    cout<<"De: "; cin>>x;
    cout<<"Para: "; cin>>y;
    cout<<"Valor: "; cin>>valor;
    
    if(x == "C")       celsius = valor;
    else if(x == "F")  celsius = (valor - 32) * 5/9;
    else if(x == "K")  celsius = valor - 273.15;
    else{
        cout<<"Opção inválida!"<<endl;
        system("pause");
        return;
    }
    
    if(y == "C")       resultado = celsius;
    else if(y == "F")  resultado = (celsius * 9/5) + 32;
    else if(y == "K")  resultado = celsius + 273.15;
    else{
        cout<<"Opção inválida!"<<endl;
        system("pause");
        return;
    }
    
    cout<<fixed<<setprecision(2);
    cout<<endl<<"RESULTADO: "<<valor<<" "<<x<<" = "<<resultado<<" "<<y<<endl;
    system("pause");
}

void area() {
    system("cls");
    string x, y;
    float metro_quadrado, resultado, valor;
    
    cout<<"CONVERSOR DE UNIDADES DE ÁREA"<<endl;
    cout<<"_____________________________"<<endl;
    cout<<"Unidades disponíveis:"<<endl;
    cout<<"mm2 - Milímetro quadrado"<<endl;
    cout<<"cm2 - Centímetro quadrado"<<endl;
    cout<<"dm2 - Decímetro quadrado"<<endl;
    cout<<"m2  - Metro quadrado"<<endl;
    cout<<"dam2- Decâmetro quadrado"<<endl;
    cout<<"hm2 - Hectômetro quadrado"<<endl;
    cout<<"km2 - Quilômetro quadrado"<<endl;
    cout<<"ha  - Hectare"<<endl;
    cout<<"ac  - Acre"<<endl;
    cout<<"ft2 - Pé quadrado"<<endl;
    cout<<"in2 - Polegada quadrada"<<endl<<endl;
    cout<<"Utilize as siglas"<<endl;
    
    cout<<"De: "; cin>>x;
    cout<<"Para: "; cin>>y;
    cout<<"Valor: "; cin>>valor;
    
    if(x == "mm2")      metro_quadrado = valor * 0.000001;
    else if(x == "cm2") metro_quadrado = valor * 0.0001;
    else if(x == "dm2") metro_quadrado = valor * 0.01;
    else if(x == "m2")  metro_quadrado = valor * 1.0;
    else if(x == "dam2")metro_quadrado = valor * 100.0;
    else if(x == "hm2") metro_quadrado = valor * 10000.0;
    else if(x == "km2") metro_quadrado = valor * 1000000.0;
    else if(x == "ha")  metro_quadrado = valor * 10000.0;
    else if(x == "ac")  metro_quadrado = valor * 4046.86;
    else if(x == "ft2") metro_quadrado = valor * 0.092903;
    else if(x == "in2") metro_quadrado = valor * 0.00064516;
    else{
        cout<<"Opção inválida!"<<endl;
        system("pause");
        return;
    }
    
    if(y == "mm2")      resultado = metro_quadrado / 0.000001;
    else if(y == "cm2") resultado = metro_quadrado / 0.0001;
    else if(y == "dm2") resultado = metro_quadrado / 0.01;
    else if(y == "m2")  resultado = metro_quadrado / 1.0;
    else if(y == "dam2")resultado = metro_quadrado / 100.0;
    else if(y == "hm2") resultado = metro_quadrado / 10000.0;
    else if(y == "km2") resultado = metro_quadrado / 1000000.0;
    else if(y == "ha")  resultado = metro_quadrado / 10000.0;
    else if(y == "ac")  resultado = metro_quadrado / 4046.86;
    else if(y == "ft2") resultado = metro_quadrado / 0.092903;
    else if(y == "in2") resultado = metro_quadrado / 0.00064516;
    else{
        cout<<"Opção inválida!"<<endl;
        system("pause");
        return;
    }
    
    cout<<fixed<<setprecision(2);
    cout<<endl<<"RESULTADO: "<<valor<<" "<<x<<" = "<<resultado<<" "<<y<<endl;
    system("pause");
}

void volume() {
    system("cls");
    string x, y;
    float metro_cubico, resultado, valor;
    
    cout<<"CONVERSOR DE UNIDADES DE VOLUME"<<endl;
    cout<<"_______________________________"<<endl;
    cout<<"Unidades disponíveis:"<<endl;
    cout<<"mm3 - Milímetro cúbico"<<endl;
    cout<<"cm3 - Centímetro cúbico"<<endl;
    cout<<"dm3 - Decímetro cúbico"<<endl;
    cout<<"m3  - Metro cúbico"<<endl;
    cout<<"dam3- Decâmetro cúbico"<<endl;
    cout<<"hm3 - Hectômetro cúbico"<<endl;
    cout<<"km3 - Quilômetro cúbico"<<endl;
    cout<<"L   - Litro"<<endl;
    cout<<"mL  - Mililitro"<<endl;
    cout<<"gal - Galão (EUA)"<<endl;
    cout<<"pt  - Pint (EUA)"<<endl<<endl;
    cout<<"Utilize as siglas"<<endl;
    
    cout<<"De: "; cin>>x;
    cout<<"Para: "; cin>>y;
    cout<<"Valor: "; cin>>valor;
    
    if(x == "mm3")      metro_cubico = valor * 0.000000001;
    else if(x == "cm3") metro_cubico = valor * 0.000001;
    else if(x == "dm3") metro_cubico = valor * 0.001;
    else if(x == "m3")  metro_cubico = valor * 1.0;
    else if(x == "dam3")metro_cubico = valor * 1000.0;
    else if(x == "hm3") metro_cubico = valor * 1000000.0;
    else if(x == "km3") metro_cubico = valor * 1000000000.0;
    else if(x == "L")   metro_cubico = valor * 0.001;
    else if(x == "mL")  metro_cubico = valor * 0.000001;
    else if(x == "gal") metro_cubico = valor * 0.00378541;
    else if(x == "pt")  metro_cubico = valor * 0.000473176;
    else{
        cout<<"Opção inválida!"<<endl;
        system("pause");
        return;
    }
    
    
    if(y == "mm3")      resultado = metro_cubico / 0.000000001;
    else if(y == "cm3") resultado = metro_cubico / 0.000001;
    else if(y == "dm3") resultado = metro_cubico / 0.001;
    else if(y == "m3")  resultado = metro_cubico / 1.0;
    else if(y == "dam3")resultado = metro_cubico / 1000.0;
    else if(y == "hm3") resultado = metro_cubico / 1000000.0;
    else if(y == "km3") resultado = metro_cubico / 1000000000.0;
    else if(y == "L")   resultado = metro_cubico / 0.001;
    else if(y == "mL")  resultado = metro_cubico / 0.000001;
    else if(y == "gal") resultado = metro_cubico / 0.00378541;
    else if(y == "pt")  resultado = metro_cubico / 0.000473176;
    else{
        cout<<"Opção inválida!"<<endl;
        system("pause");
        return;
    }
    
    cout<<fixed<<setprecision(6);
    cout<<endl<<"RESULTADO: "<<valor<<" "<<x<<" = "<<resultado<<" "<<y<<endl;
    system("pause");
}

void velocidade() {
    system("cls");
    string x, y;
    float metro_por_segundo, resultado, valor;
    
    cout<<"CONVERSOR DE UNIDADES DE VELOCIDADE"<<endl;
    cout<<"__________________________________"<<endl;
    cout<<"Unidades disponíveis:"<<endl;
    cout<<"m/s  - Metro por segundo"<<endl;
    cout<<"km/h - Quilômetro por hora"<<endl;
    cout<<"mph  - Milha por hora"<<endl;
    cout<<"ft/s - Pé por segundo"<<endl;
    cout<<"kn   - Nó (milha náutica por hora)"<<endl<<endl;
    cout<<"Utilize as siglas"<<endl;
    
    cout<<"De: "; cin>>x;
    cout<<"Para: "; cin>>y;
    cout<<"Valor: "; cin>>valor;
    
    if(x == "m/s")      metro_por_segundo = valor;
    else if(x == "km/h")metro_por_segundo = valor / 3.6;
    else if(x == "mph") metro_por_segundo = valor * 0.44704;
    else if(x == "ft/s")metro_por_segundo = valor * 0.3048;
    else if(x == "kn")  metro_por_segundo = valor * 0.514444;
    else{
        cout<<"Opção inválida!"<<endl;
        system("pause");
        return;
    }
    
    if(y == "m/s")      resultado = metro_por_segundo;
    else if(y == "km/h")resultado = metro_por_segundo * 3.6;
    else if(y == "mph") resultado = metro_por_segundo / 0.44704;
    else if(y == "ft/s")resultado = metro_por_segundo / 0.3048;
    else if(y == "kn")  resultado = metro_por_segundo / 0.514444;
    else{
        cout<<"Opção inválida!"<<endl;
        system("pause");
        return;
    }
    
    cout<<fixed<<setprecision(2);
    cout<<endl<<"RESULTADO: "<<valor<<" "<<x<<" = "<<resultado<<" "<<y<<endl;
    system("pause");
}

void pressao() {
    system("cls");
    string x, y;
    float pascal, resultado, valor;
    
    cout<<"CONVERSOR DE UNIDADES DE PRESSÃO"<<endl;
    cout<<"________________________________"<<endl;
    cout<<"Unidades disponíveis:"<<endl;
    cout<<"Pa    - Pascal"<<endl;
    cout<<"kPa   - Quilopascal"<<endl;
    cout<<"MPa   - Megapascal"<<endl;
    cout<<"bar   - Bar"<<endl;
    cout<<"atm   - Atmosfera padrão"<<endl;
    cout<<"mmHg  - Milímetro de mercúrio"<<endl;
    cout<<"psi   - Libra por polegada quadrada"<<endl<<endl;
    cout<<"Utilize as siglas"<<endl;
    
    cout<<"De: "; cin>>x;
    cout<<"Para: "; cin>>y;
    cout<<"Valor: "; cin>>valor;
    
    if(x == "Pa")      pascal = valor;
    else if(x == "kPa")pascal = valor * 1000.0;
    else if(x == "MPa")pascal = valor * 1000000.0;
    else if(x == "bar")pascal = valor * 100000.0;
    else if(x == "atm")pascal = valor * 101325.0;
    else if(x == "mmHg")pascal = valor * 133.322;
    else if(x == "psi")pascal = valor * 6894.76;
    else{
        cout<<"Opção inválida!"<<endl;
        system("pause");
        return;
    }
    
    if(y == "Pa")      resultado = pascal;
    else if(y == "kPa")resultado = pascal / 1000.0;
    else if(y == "MPa")resultado = pascal / 1000000.0;
    else if(y == "bar")resultado = pascal / 100000.0;
    else if(y == "atm")resultado = pascal / 101325.0;
    else if(y == "mmHg")resultado = pascal / 133.322;
    else if(y == "psi")resultado = pascal / 6894.76;
    else{
        cout<<"Opção inválida!"<<endl;
        system("pause");
        return;
    }
    
    cout<<fixed<<setprecision(6);
    cout<<endl<<"RESULTADO: "<<valor<<" "<<x<<" = "<<resultado<<" "<<y<<endl;
    system("pause");
}

void energia() {
    system("cls");
    string x, y;
    float joule, resultado, valor;
    
    cout<<"CONVERSOR DE UNIDADES DE ENERGIA"<<endl;
    cout<<"_______________________________"<<endl;
    cout<<"Unidades disponíveis:"<<endl;
    cout<<"J    - Joule"<<endl;
    cout<<"kJ   - Quilojoule"<<endl;
    cout<<"cal  - Caloria"<<endl;
    cout<<"kcal - Quilocaloria"<<endl;
    cout<<"Wh   - Watt-hora"<<endl;
    cout<<"kWh  - Quilowatt-hora"<<endl;
    cout<<"eV   - Elétron-volt"<<endl<<endl;
    cout<<"Utilize as siglas"<<endl;
    
    cout<<"De: "; cin>>x;
    cout<<"Para: "; cin>>y;
    cout<<"Valor: "; cin>>valor;
    
    if(x == "J")      joule = valor;
    else if(x == "kJ")joule = valor * 1000.0;
    else if(x == "cal")joule = valor * 4.184;
    else if(x == "kcal")joule = valor * 4184.0;
    else if(x == "Wh")joule = valor * 3600.0;
    else if(x == "kWh")joule = valor * 3600000.0;
    else if(x == "eV")joule = valor * 1.60218e-19;
    else{
        cout<<"Opção inválida!"<<endl;
        system("pause");
        return;
    }
    
    if(y == "J")      resultado = joule;
    else if(y == "kJ")resultado = joule / 1000.0;
    else if(y == "cal")resultado = joule / 4.184;
    else if(y == "kcal")resultado = joule / 4184.0;
    else if(y == "Wh")resultado = joule / 3600.0;
    else if(y == "kWh")resultado = joule / 3600000.0;
    else if(y == "eV")resultado = joule / 1.60218e-19;
    else{
        cout<<"Opção inválida!"<<endl;
        system("pause");
        return;
    }
    
    cout<<fixed<<setprecision(6);
    cout<<endl<<"RESULTADO: "<<valor<<" "<<x<<" = "<<resultado<<" "<<y<<endl;
    system("pause");
}

void frequencia() {
    system("cls");
    string x, y;
    float hertz, resultado, valor;
    
    cout<<"CONVERSOR DE UNIDADES DE FREQUÊNCIA"<<endl;
    cout<<"__________________________________"<<endl;
    cout<<"Unidades disponíveis:"<<endl;
    cout<<"Hz   - Hertz"<<endl;
    cout<<"kHz  - Quilohertz"<<endl;
    cout<<"MHz  - Megahertz"<<endl;
    cout<<"GHz  - Gigahertz"<<endl;
    cout<<"THz  - Terahertz"<<endl;
    cout<<"rpm  - Rotações por minuto"<<endl<<endl;
    cout<<"Utilize as siglas"<<endl;
    
    cout<<"De: "; cin>>x;
    cout<<"Para: "; cin>>y;
    cout<<"Valor: "; cin>>valor;
    
    if(x == "Hz")      hertz = valor;
    else if(x == "kHz")hertz = valor * 1000.0;
    else if(x == "MHz")hertz = valor * 1000000.0;
    else if(x == "GHz")hertz = valor * 1000000000.0;
    else if(x == "THz")hertz = valor * 1000000000000.0;
    else if(x == "rpm")hertz = valor / 60.0;
    else{
        cout<<"Opção inválida!"<<endl;
        system("pause");
        return;
    }
    
    if(y == "Hz")      resultado = hertz;
    else if(y == "kHz")resultado = hertz / 1000.0;
    else if(y == "MHz")resultado = hertz / 1000000.0;
    else if(y == "GHz")resultado = hertz / 1000000000.0;
    else if(y == "THz")resultado = hertz / 1000000000000.0;
    else if(y == "rpm")resultado = hertz * 60.0;
    else{
        cout<<"Opção inválida!"<<endl;
        system("pause");
        return;
    }
    
    cout<<fixed<<setprecision(6);
    cout<<endl<<"RESULTADO: "<<valor<<" "<<x<<" = "<<resultado<<" "<<y<<endl;
    system("pause");
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int op;
	
	do{
	system("cls");
	cout<<"CONVERSOR DE UNIDADES DE MEDIDA POR:"<<endl;
	cout<<"________________________________"<<endl;
	cout<<"[1] COMPRIMENTO"<<endl;
	cout<<"[2] MASSA"<<endl;
	cout<<"[3] TEMPO"<<endl;
	cout<<"[4] TEMPERATURA"<<endl;
	cout<<"[5] ÁREA"<<endl;
	cout<<"[6] VOLUME"<<endl;
	cout<<"[7] VELOCIDADE"<<endl;
	cout<<"[8] PRESSÂO"<<endl;
	cout<<"[9] ENERGIA"<<endl;
	cout<<"[10] FREQUÊNCIA"<<endl;
	cout<<"[11] ALTERNAR MODO CLARO/ESCURO"<<endl;
	cout<<"[0] SAIR"<<endl<<endl;
	cout<<"DIGITE O COMANDO A SER PROCESSADO: "; cin>>op; 
	
	switch(op){
		case 1: comprimento(); break;
		case 2: massa();       break;	
		case 3: tempo();       break;
		case 4: temperatura(); break;
		case 5: area();        break;
		case 6: volume();      break;
		case 7: velocidade();  break;
		case 8: pressao();     break;
		case 9: energia();     break;
		case 10: frequencia(); break;
		case 11: mudar_modo(); break;
		default: cout<<endl<<"Opção inválida! tente novamente."<<endl; system("pause"); break;
	}
	
    }while(op != 0);
    
	return 0;
}