//NaIのADCcalibrationとtdc0のTDCcalibrationを行ってEne2,3,4とTimeに変換する//
void calibration()
{
  Char_t *ifilename = "../0223/20170223.root";
  Char_t *ofilename = "../0223/20170223_calib.root";
  
  //0217
  /*Double_t ECalibFac2_a = -110.148;
  Double_t ECalibFac3_a = -138.241;
  Double_t ECalibFac4_a = -104.253;
  Double_t ECalibFac2_b = 0.484187;
  Double_t ECalibFac3_b = 0.479499;
  Double_t ECalibFac4_b = 0.496031;
  Double_t TCalibFac = 0.2541;*/
  
  //0223
  Double_t ECalibFac2_a = -109.752;                                           
  Double_t ECalibFac3_a = -140.746;                                           
  Double_t ECalibFac4_a = -98.5285;                                            
  Double_t ECalibFac2_b = 0.483395;                                            
  Double_t ECalibFac3_b = 0.48153;                                            
  Double_t ECalibFac4_b = 0.468643;                                            
  Double_t TCalibFac = 0.2541;

  // input 
  TFile *ifile = new TFile(ifilename);
  TTree *itree = (TTree*)ifile->Get("tree");


  Int_t time,adc2,adc3,adc4;
  Int_t tdc0,tdc1,tdc2,tdc3,tdc4;
  
  itree->SetBranchAddress("time",&time);
  itree->SetBranchAddress("adc2",&adc2);
  itree->SetBranchAddress("adc3",&adc3);
  itree->SetBranchAddress("adc4",&adc4);
  itree->SetBranchAddress("tdc0",&tdc0);
  itree->SetBranchAddress("tdc1",&tdc1);
  itree->SetBranchAddress("tdc2",&tdc2);
  itree->SetBranchAddress("tdc3",&tdc3);
  itree->SetBranchAddress("tdc4",&tdc4);
  
  // output
  TFile *ofile = new TFile(ofilename,"RECREATE");
  TTree *otree = new TTree("T","calibrated");
  
  Double_t Ene2,Ene3,Ene4;
  Double_t Time;
  
  otree->Branch("Ene2", &Ene2, "Ene2/D");
  otree->Branch("Ene3", &Ene3, "Ene3/D");
  otree->Branch("Ene4", &Ene4, "Ene4/D");
  otree->Branch("Time",&Time,"Time/D");
  otree->Branch("time",&time,"time/I");
  otree->Branch("adc2",&adc2,"adc2/I");
  otree->Branch("adc3",&adc3,"adc3/I");
  otree->Branch("adc4",&adc4,"adc4/I");
  otree->Branch("tdc0",&tdc0,"tdc0/I");
  otree->Branch("tdc1",&tdc1,"tdc1/I");
  otree->Branch("tdc2",&tdc2,"tdc2/I");
  otree->Branch("tdc3",&tdc3,"tdc3/I");
  otree->Branch("tdc4",&tdc4,"tdc4/I");
  
  Int_t nentry = itree->GetEntries();
  cout << "# of entries = " << nentry << endl;  
  cout << endl;
  for(Int_t ientry = 0 ; ientry < nentry ; ++ientry){
    itree->GetEntry(ientry);
    
    Ene2  = adc2 * ECalibFac2_b + ECalibFac2_a; 
    Ene3  = adc3 * ECalibFac3_b + ECalibFac3_a;
    Ene4  = adc4 * ECalibFac4_b + ECalibFac4_a;
    Time = -TCalibFac * tdc0;

    otree->Fill();
  }
  
  ofile->cd();
  otree->Write();
  ofile->Close();
}
