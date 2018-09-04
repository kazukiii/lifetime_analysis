{
  Double_t x[16] = {160., 180., 200., 220., 240., 260., 280., 300., 320., 340., 360., 380., 400., 420., 440., 460.};
  Double_t ex[16]={0.};
  Double_t y[16], ey[16];


  gStyle->SetOptFit();
  TFile *file = new TFile("20170223_calib.root");
 

  TCanvas *c1 = new TCanvas("c1","c1");
  c1->SetLogz();
  T->Draw("Time:Ene4>>hist0(600,0,1800,550,-1100,0)","420<tdc4&&tdc4<424","colz");
  

  TCanvas *c2 = new TCanvas("c2","c2");
  c2->Divide(4,4);

  c2->cd(1);
  T->Draw("Time>>hist1(60,-920,-860)","420<tdc4&&tdc4<424&&155<Ene4&&Ene4<165");
  hist1->Fit("gaus","","",-915,-877);
  hist1->SetTitle("160keV Timefitting");
  hist1->SetXTitle("Time[ns]");
  hist1->SetYTitle("count");
  y[0] = gaus->GetParameter(1);
  ey[0] = gaus->GetParError(1);

  c2->cd(2);
  T->Draw("Time>>hist2(60,-920,-860)","420<tdc4&&tdc4<424&&175<Ene4&&Ene4<185");
  hist2->Fit("gaus","","",-915,-886);
  hist2->SetTitle("180keV Timefitting");
  hist2->SetXTitle("Time[ns]");
  hist2->SetYTitle("count");
  y[1] = gaus->GetParameter(1);
  ey[1] = gaus->GetParError(1);

  c2->cd(3);
  T->Draw("Time>>hist3(50,-920,-870)","420<tdc4&&tdc4<424&&195<Ene4&&Ene4<205");
  hist3->Fit("gaus","","",-914,-889);
  hist3->SetTitle("200keV Timefitting");
  hist3->SetXTitle("Time[ns]");
  hist3->SetYTitle("count");
  y[2] = gaus->GetParameter(1);
  ey[2] = gaus->GetParError(1);

  c2->cd(4);
  T->Draw("Time>>hist4(50,-920,-870)","420<tdc4&&tdc4<424&&215<Ene4&&Ene4<225");
  hist4->Fit("gaus","","",-915,-893);
  hist4->SetTitle("220keV Timefitting");
  hist4->SetXTitle("Time[ns]");
  hist4->SetYTitle("count");
  y[3] = gaus->GetParameter(1);
  ey[3] = gaus->GetParError(1);

  c2->cd(5);
  T->Draw("Time>>hist5(40,-920,-880)","420<tdc4&&tdc4<424&&235<Ene4&&Ene4<245");
  hist5->Fit("gaus","","",-915,-895);
  hist5->SetTitle("240keV Timefitting");
  hist5->SetXTitle("Time[ns]");
  hist5->SetYTitle("count");
  y[4] = gaus->GetParameter(1);
  ey[4] = gaus->GetParError(1);

  c2->cd(6);
  T->Draw("Time>>hist6(35,-920,-885)","420<tdc4&&tdc4<424&&255<Ene4&&Ene4<265");
  hist6->Fit("gaus","","",-915,-899);
  hist6->SetTitle("260keV Timefitting");
  hist6->SetXTitle("Time[ns]");
  hist6->SetYTitle("count");
  y[5] = gaus->GetParameter(1);
  ey[5] = gaus->GetParError(1);

  c2->cd(7);
  T->Draw("Time>>hist7(35,-920,-885)","420<tdc4&&tdc4<424&&275<Ene4&&Ene4<285");
  hist7->Fit("gaus","","",-915,-899);
  hist7->SetTitle("280keV Timefitting");
  hist7->SetXTitle("Time[ns]");
  hist7->SetYTitle("count");
  y[6] = gaus->GetParameter(1);
  ey[6] = gaus->GetParError(1);

  c2->cd(8);
  T->Draw("Time>>hist8(35,-920,-885)","420<tdc4&&tdc4<424&&295<Ene4&&Ene4<305");
  hist8->Fit("gaus","","",-916,-901);
  hist8->SetTitle("300keV Timefitting");
  hist8->SetXTitle("Time[ns]");
  hist8->SetYTitle("count");
  y[7] = gaus->GetParameter(1);
  ey[7] = gaus->GetParError(1);

  c2->cd(9);
  T->Draw("Time>>hist9(30,-920,-890)","420<tdc4&&tdc4<424&&315<Ene4&&Ene4<325");
  hist9->Fit("gaus","","",-917,-901);
  hist9->SetTitle("320keV Timefitting");
  hist9->SetXTitle("Time[ns]");
  hist9->SetYTitle("count");
  y[8] = gaus->GetParameter(1);
  ey[8] = gaus->GetParError(1);

  c2->cd(10);
  T->Draw("Time>>hist10(30,-920,-890)","420<tdc4&&tdc4<424&&335<Ene4&&Ene4<345");
  hist10->Fit("gaus","","",-917,-901);
  hist10->SetTitle("340keV Timefitting");
  hist10->SetXTitle("Time[ns]");
  hist10->SetYTitle("count");
  y[9] = gaus->GetParameter(1);
  ey[9] = gaus->GetParError(1);

  c2->cd(11);
  T->Draw("Time>>hist11(30,-920,-890)","420<tdc4&&tdc4<424&&355<Ene4&&Ene4<365");
  hist11->Fit("gaus","","",-918,-901);
  hist11->SetTitle("360keV Timefitting");
  hist11->SetXTitle("Time[ns]");
  hist11->SetYTitle("count");
  y[10] = gaus->GetParameter(1);
  ey[10] = gaus->GetParError(1);

  c2->cd(12);
  T->Draw("Time>>hist12(30,-920,-890)","420<tdc4&&tdc4<424&&375<Ene4&&Ene4<385");
  hist12->Fit("gaus","","",-918,-903);
  hist12->SetTitle("380keV Timefitting");
  hist12->SetXTitle("Time[ns]");
  hist12->SetYTitle("count");
  y[11] = gaus->GetParameter(1);
  ey[11] = gaus->GetParError(1);

  c2->cd(13);
  T->Draw("Time>>hist13(30,-925,-895)","420<tdc4&&tdc4<424&&395<Ene4&&Ene4<405");
  hist13->Fit("gaus","","",-918,-903);
  hist13->SetTitle("400keV Timefitting");
  hist13->SetXTitle("Time[ns]");
  hist13->SetYTitle("count");
  y[12] = gaus->GetParameter(1);
  ey[12] = gaus->GetParError(1);

  c2->cd(14);
  T->Draw("Time>>hist14(30,-925,-895)","420<tdc4&&tdc4<424&&415<Ene4&&Ene4<425");
  hist14->Fit("gaus","","",-917,-903);
  hist14->SetTitle("420keV Timefitting");
  hist14->SetXTitle("Time[ns]");
  hist14->SetYTitle("count");
  y[13] = gaus->GetParameter(1);
  ey[13] = gaus->GetParError(1);

  c2->cd(15);
  T->Draw("Time>>hist15(30,-925,-895)","420<tdc4&&tdc4<424&&435<Ene4&&Ene4<445");
  hist15->Fit("gaus","","",-917,-903);
  hist15->SetTitle("440keV Timefitting");
  hist15->SetXTitle("Time[ns]");
  hist15->SetYTitle("count");
  y[14] = gaus->GetParameter(1);
  ey[14] = gaus->GetParError(1);

  c2->cd(16);
  T->Draw("Time>>hist16(30,-925,-895)","420<tdc4&&tdc4<424&&455<Ene4&&Ene4<465");
  hist16->Fit("gaus","","",-918,-903);
  hist16->SetTitle("460keV Timefitting");
  hist16->SetXTitle("Time[ns]");
  hist16->SetYTitle("count");
  y[15] = gaus->GetParameter(1);
  ey[15] = gaus->GetParError(1);

  //  c2->cd();
  //  T->Draw("Time>>hist(60,-930,-870)","420<tdc2&&tdc2<424&&5<Ene2&&Ene2<5");
  //  hist->Fit("gaus","","",-915,-885);


  TCanvas *c3 = new TCanvas("c3","c3");
  TGraph *graph1 = new TGraphErrors(16,x,y,ex,ey);
  graph1->SetMarkerStyle(20);
  graph1->Draw("AP");
  graph1->SetTitle("TQ3");
  graph1->GetXaxis()->SetTitle("Energy[keV]");
  graph1->GetYaxis()->SetTitle("Time[ns]");
  TF1 *f1 = new TF1("f1","[0]/pow(x-[1],[2])+[3]");
  f1->SetParameters(3000,70,1,-920);
  graph1->Fit("f1");
  Double_t p_0 = f1->GetParameter(0);
  Double_t p_1 = f1->GetParameter(1);
  Double_t p_2 = f1->GetParameter(2);
  Double_t p_3 = f1->GetParameter(3);
  T->Branch("p_0",&p_0);
  T->Branch("p_1",&p_1);
  T->Branch("p_2",&p_2);
  T->Branch("p_3",&p_3);



  TCanvas *c4 = new TCanvas("c4","c4");
  c4->SetLogz(1);
  T->Draw("(Time - p_0/pow(Ene4-p_1,p_2) - p_3):Ene4>>hist17(600,0,1800,700,-400,1000)","420<tdc4&&tdc4<424","colz");


  // input
  TFile *ifile = new TFile("20170223_calib.root");
  TTree *itree = (TTree*)ifile->Get("T");

  Int_t adc2,adc3,adc4;
  Int_t tdc0,tdc1,tdc2,tdc3,tdc4;
  Double_t Ene2,Ene3,Ene4;
  Double_t Time;

  itree->SetBranchAddress("adc2",&adc2);
  itree->SetBranchAddress("adc3",&adc3);
  itree->SetBranchAddress("adc4",&adc4);
  itree->SetBranchAddress("tdc0",&tdc0);
  itree->SetBranchAddress("tdc1",&tdc1);
  itree->SetBranchAddress("tdc2",&tdc2);
  itree->SetBranchAddress("tdc3",&tdc3);
  itree->SetBranchAddress("tdc4",&tdc4);
  itree->SetBranchAddress("Ene2",&Ene2);
  itree->SetBranchAddress("Ene3",&Ene3);
  itree->SetBranchAddress("Ene4",&Ene4);
  itree->SetBranchAddress("Time",&Time);

  // output
  TFile *ofile = new TFile("20170223_TQ4.root","RECREATE");
  TTree *otree = new TTree("TQ","TQcalibrated");

  Double_t TQ_Time;

  otree->Branch("Ene2", &Ene2, "Ene2/D");
  otree->Branch("Ene3", &Ene3, "Ene3/D");
  otree->Branch("Ene4", &Ene4, "Ene4/D");
  otree->Branch("Time",&Time,"Time/D");
  otree->Branch("TQ_Time",&TQ_Time,"TQ_Time/D");
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

    TQ_Time = Time - p_0/pow(Ene4-p_1,p_2)-p_3;

    otree->Fill();
  }
  ofile->cd();
  otree->Write();
  ofile->Close();
}
