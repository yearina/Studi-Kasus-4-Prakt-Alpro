using namespace std;

class Input {
	public :
		void cetak(){
			cout<<"\n======= APLIKASI KEUANGAN PRIBADI===="<<endl;
			cout<<endl<<endl;
			cout<<"Silahkan masukan data keuangan anda"<<endl;
			cout<<"Uang saku perbulan : "; cin>>uang_bulan;
		}
		int iteratif(){
			for (i=1;i<=12;i++){
				cout<<"Pengeluaran bulan ke-"<<i<<" : "; cin>>uang_pengeluaran[i];
			}
		}
		void toFile(){
			tulis_data.open("api_data.txt");
			tulis_data << uang_bulan<<endl;
			for (i=1;i<=12;i++){
				tulis_data << uang_pengeluaran[i]<<endl;
			}
			tulis_data.close();
		}
		private :
			ofstream tulis_data;
			int uang_bulan, uang_pengeluaran[13], i;
		};
