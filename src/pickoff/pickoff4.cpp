{
  Float_t p[9], N[9];


  TFile *file = new TFile("./20170223_TQ4.root");
  gStyle->SetOptFit();


  TCanvas *c1 = new TCanvas("c1","c1");
  c1->Divide(5,2);



  c1->cd(1);
  TQ->Draw("Ene4>>hist1(50,100,600)","60<TQ_Time&&TQ_Time<90&&tdc4>420&&tdc4<424&&150<Ene4&&Ene4<600");
  TF1 *f1 = new TF1("f1","[0]*exp(-0.5*pow((x-[1])/[2],2))",100,600);
  f1->SetParameters(1200,520,30);
  hist1->Fit("f1","","",490,560);
  p[0] = f1->GetParameter(0);//最大
  N[0] = hist1->GetEntries();//総数

  c1->cd(2);
  TQ->Draw("Ene4>>hist2(50,100,600)","110<TQ_Time&&TQ_Time<140&&tdc4>420&&tdc4<424&&150<Ene4&&Ene4<600");
  TF1 *f2 = new TF1("f2","[0]*exp(-0.5*pow((x-[1])/[2],2))",100,600);
  f2->SetParameters(1200,520,30);
  hist2->Fit("f2","","",490,560);
  p[1] = f2->GetParameter(0);
  N[1] = hist2->GetEntries();

  c1->cd(3);
  TQ->Draw("Ene4>>hist3(50,100,600)","160<TQ_Time&&TQ_Time<190&&tdc4>420&&tdc4<424&&150<Ene4&&Ene4<600");
  hist3->SetTitle("Pickoff(NaI2) 150<Time<200");
  hist3->GetYaxis()->SetTitle("Frequency[events]");
  hist3->GetXaxis()->SetTitle("Energy[kev]");
  TF1 *f3 = new TF1("f3","[0]*exp(-0.5*pow((x-[1])/[2],2))",100,600);
  f3->SetParameters(1200,520,30);
  hist3->Fit("f3","","",490,560);
  p[2] = f3->GetParameter(0);
  N[2] = hist3->GetEntries();

  c1->cd(4);
  TQ->Draw("Ene4>>hist4(50,100,600)","210<TQ_Time&&TQ_Time<240&&tdc4>420&&tdc4<424&&150<Ene4&&Ene4<600");
  TF1 *f4 = new TF1("f4","[0]*exp(-0.5*pow((x-[1])/[2],2))",100,600);
  f4->SetParameters(1200,520,30);
  hist4->Fit("f4","","",490,560);
  p[3] = f4->GetParameter(0);
  N[3] = hist4->GetEntries();

  c1->cd(5);
  TQ->Draw("Ene4>>hist5(50,100,600)","260<TQ_Time&&TQ_Time<290&&tdc4>420&&tdc4<424&&150<Ene4&&Ene4<600");
  TF1 *f5 = new TF1("f5","[0]*exp(-0.5*pow((x-[1])/[2],2))",100,600);
  f5->SetParameters(1200,520,30);
  hist5->Fit("f5","","",490,560);
  p[4] = f5->GetParameter(0);
  N[4] = hist5->GetEntries();

  c1->cd(6);
  TQ->Draw("Ene4>>hist6(50,100,600)","310<TQ_Time&&TQ_Time<340&&tdc4>420&&tdc4<424&&150<Ene4&&Ene4<600");
  hist6->SetTitle("Pickoff(NaI2) 300<Time<350");
  hist6->GetYaxis()->SetTitle("Frequency[events]");
  hist6->GetXaxis()->SetTitle("Energy[kev]");
  TF1 *f6 = new TF1("f6","[0]*exp(-0.5*pow((x-[1])/[2],2))",100,600);
  f6->SetParameters(1200,520,30);
  hist6->Fit("f6","","",490,560);
  p[5] = f6->GetParameter(0);
  N[5] = hist6->GetEntries();

  c1->cd(7);
  TQ->Draw("Ene4>>hist7(50,100,600)","360<TQ_Time&&TQ_Time<390&&tdc4>420&&tdc4<424&&150<Ene4&&Ene4<600");
  TF1 *f7 = new TF1("f7","[0]*exp(-0.5*pow((x-[1])/[2],2))",100,600);
  f7->SetParameters(1200,520,30);
  hist7->Fit("f7","","",500,560);
  p[6] = f7->GetParameter(0);
  N[6] = hist7->GetEntries();

  c1->cd(8);
  TQ->Draw("Ene4>>hist8(50,100,600)","410<TQ_Time&&TQ_Time<440&&tdc4>420&&tdc4<424&&150<Ene4&&Ene4<600");
  TF1 *f8 = new TF1("f8","[0]*exp(-0.5*pow((x-[1])/[2],2))",100,600);
  f8->SetParameters(1200,520,30);
  hist8->Fit("f8","","",490,560);
  p[7] = f8->GetParameter(0);
  N[7] = hist8->GetEntries();

  c1->cd(9);
  TQ->Draw("Ene4>>hist9(50,100,600)","460<TQ_Time&&TQ_Time<490&&tdc4>420&&tdc4<424&&150<Ene4&&Ene4<600");
  TF1 *f9 = new TF1("f9","[0]*exp(-0.5*pow((x-[1])/[2],2))",100,600);
  f9->SetParameters(1200,520,30);
  hist9->Fit("f9","","",490,560);
  p[8] = f9->GetParameter(0);
  N[8] = hist9->GetEntries();

  c1->cd(10);
  TQ->Draw("Ene4>>hist(50,100,600)","-1<TQ_Time&&TQ_Time<1&&tdc4>420&&tdc4<424&&150<Ene4&&Ene4<600");
  hist->SetTitle("Pickoff(NaI2) -1<Time<1");
  hist->GetYaxis()->SetTitle("Frequency[events]");
  hist->GetXaxis()->SetTitle("Energy[kev]");
  TF1 *f10 = new TF1("f10","[0]*exp(-0.5*pow((x-[1])/[2],2))",100,600);
  f10->SetParameters(1200,520,30);
  hist->Fit("f10","","",490,560);
  Float_t peak4 = f10->GetParameter(0);
  Float_t sum4 = hist->GetEntries();




  TCanvas *c2 = new TCanvas("c2","c2");
  Float_t Time4[9] = {75, 125, 175, 225, 275, 325, 375, 425, 475};
  Float_t func4[9];
  Int_t i;
  for(i=0;i<=8;i++){
     func4[i] = p[i]*sum4/(peak4*N[i]-p[i]*sum4);
  }
  TGraph *graph2 = new TGraph(9, Time4, func4);
  graph2->SetTitle("pickoff function(NaI4)");
  graph2->GetXaxis()->SetTitle("Time[ns]");
  graph2->GetYaxis()->SetTitle("f(t)");
  graph2->SetMarkerStyle(20);
  graph2->Draw("AP");

  TF1 *fn2 = new TF1("fn2","[0]*exp(-x/[1])+[2]",0,500);
  fn2->SetParameters(1,100,0);
  graph2->Fit("fn2","","",0,500);
  Double_t p0_4 = fn2->GetParameter(0);
  Double_t p1_4 = fn2->GetParameter(1);
  Double_t p2_4 = fn2->GetParameter(2);



  TCanvas *c3 = new TCanvas("c3","c3");
  TFile *_file0 = new TFile("./20170223_TQ4.root");
  TF1 *life2 = new TF1("life2","[0]*([3]*exp(-x/[4])+[5]+1)*exp(-(-[3]*[4]*exp(-x/[4])+([5]+1)*x)/[1])+[2]",0,800);
  TQ->Draw("TQ_Time>>hist2(100,-100,900)","150<Ene4&&Ene4<600&&420<tdc4&&tdc4<424");
  hist2->SetTitle("Lifetime(NaI4)");
  hist2->GetYaxis()->SetTitle("Frequency[events]");
  hist2->GetXaxis()->SetTitle("Time[ns]");
  c3->SetLogy(1);
  life2->SetParameters(1000,100,20000);
  life2->FixParameter(3,p0_4);
  life2->FixParameter(4,p1_4);
  life2->FixParameter(5,p2_4);
  hist2->Fit("life2","","",50,600);
  hist2->Draw();


}
