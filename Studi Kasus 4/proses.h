using namespace std;

class Proses{
	public:
		void getData(){
			ambil_data.open("api_data.txt");
			i = 0;
			while(!ambil_data.eof()) {
				if(i == 0)
					ambil_data>>uang;
				else
					ambil_data>>pengeluaran[i];
				i++;
			}
			ambil_data.close();
		}
		int iteratif();
		void toFile(){
			tulis_data.open("api_data.txt");
			tulis_data<<uang<<endl;
			for(i = 1; i <= 12; i++){
				tulis_data<<pengeluaran[i]<<endl;
			}
			tulis_data<<tot_uang<<endl;
			tulis_data<<tot_pengeluaran<<endl;
			tulis_data<<tabungan<<endl;
			tulis_data.close();
		}
		
	private:
		ifstream ambil_data;
		ofstream tulis_data;
		int i, uang, pengeluaran[13], tot_uang, tot_pengeluaran, tabungan;
};	

int Proses::iteratif(){
	tot_pengeluaran = 0;
	for(i =1; i <= 12; i++){
		tot_uang = i*uang;
		tot_pengeluaran += pengeluaran[i];
		tabungan = i*uang-tot_pengeluaran;	
	} 
}
