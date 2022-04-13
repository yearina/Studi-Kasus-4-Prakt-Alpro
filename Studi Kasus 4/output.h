using namespace std;

class Output {
	public :
		void cetak(){
			cout<<"\n\nData Keuangan\n";
			cout<<"=============\n";
			cout<<"Uang saku perbulan: "<<data_file[0]<<endl;
			cout<<"Pengeluaran:"<<endl;
			bulan = 12;
			for (int i = 1; i <= bulan; i++){
   			 cout << "Bulan ke-[" << i+1 <<"] = "<<data_file[i]<<endl;
 			}
  			cout <<"\nTotal uang saku : "<<data_file[13];
			cout << "\nTotal keseluruhan pengeluaran : " <<data_file[14];
    		cout << "\nTotal tabungan : " <<data_file[15]<<endl;
      
		}

		void getData(){
			ambil_data.open("api_data.txt");
      bool xbulan=true;
      bool xtotal=false;
			while(!ambil_data.eof()){
        if(xbulan){
          ambil_data >> bulan;
          xbulan=false;
          xtotal=true;
        }else if(xtotal){
          ambil_data >> total;
          xtotal=false;
        }else{
          ambil_data >> tabungan;
        }
			}
			ambil_data.close();
		

    ambil_data.open("api_data.txt");
    		index = 0;
			while(!ambil_data.eof()){
				ambil_data >> data_file[index];
				index += 1;
			}
			ambil_data.close();
		}

	private :
		ifstream ambil_data;
		string data_file[30];
		int index;
    int bulan,total,tabungan;
};
