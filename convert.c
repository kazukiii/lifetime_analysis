void convert()
{
  TFile *ofile = new TFile("../20170223.root","RECREATE");
  TTree *tr = new TTree("tree","tree");
 
  tr->ReadFile("../20170223.dat","clock/I:adc2:adc3:adc4:tdc0:tdc1:tdc2:tdc3:tdc4");
  
  tr->Write();
  ofile->Close();
  
}

