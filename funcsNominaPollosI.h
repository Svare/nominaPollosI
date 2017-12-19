

double indiceDeProductividad(double porcentMortalidad,double gananciaDiaria, double conversion){
	return ((100-porcentMortalidad)*gananciaDiaria)/(conversion*10);
}

double puntosIndiceDeProductividad(double indiceDeProductividad){
	if(indiceDeProductividad >= 230 && indiceDeProductividad <= 250){
		return 0.0;
	} else if (indiceDeProductividad > 250){
		return indiceDeProductividad - 250;
	} else if (indiceDeProductividad < 230){
		return indiceDeProductividad - 230;
	} else {
		printf("ERROR AL OBTENER EL BONO POR INDICE DE PRODUCTIVIDAD\n");
	}
}

double gramosSobantesFaltantes(double gananciaDiaria){
	if(gananciaDiaria >= 50 && gananciaDiaria <= 53.5){
		return 0.0;
	} else if (gananciaDiaria > 53.5){
		return gananciaDiaria - 53.5;
	} else if (gananciaDiaria < 50){
		return gananciaDiaria - 50;
	} else {
		printf("ERROR AL OBTENER EL BONO POR GRAMOS FALTANTES SOBRANTES\n");
	}
}

void llenaTablaBonos(bonos tablaBonos[]){

	tablaBonos[0].indiceDeConversion = 1.950;
	tablaBonos[0].bonoXKg = 1.250;
	tablaBonos[0].gananciaDiaria = 53.57;
	tablaBonos[0].peso = 3000;

	tablaBonos[1].indiceDeConversion = 1.960;
	tablaBonos[1].bonoXKg = 1.230;
	tablaBonos[1].gananciaDiaria = 53.49;
	tablaBonos[1].peso = 2996;

	tablaBonos[2].indiceDeConversion = 1.970;
	tablaBonos[2].bonoXKg = 1.210;
	tablaBonos[2].gananciaDiaria = 53.41;
	tablaBonos[2].peso = 2991;

	tablaBonos[3].indiceDeConversion = 1.980;
	tablaBonos[3].bonoXKg = 1.190;
	tablaBonos[3].gananciaDiaria = 53.33;
	tablaBonos[3].peso = 2987;

	tablaBonos[4].indiceDeConversion = 1.990;
	tablaBonos[4].bonoXKg = 1.170;
	tablaBonos[4].gananciaDiaria = 53.25;
	tablaBonos[4].peso = 2982;

	tablaBonos[5].indiceDeConversion = 2.000;
	tablaBonos[5].bonoXKg = 1.150;
	tablaBonos[5].gananciaDiaria = 53.17;
	tablaBonos[5].peso = 2978;

	tablaBonos[6].indiceDeConversion = 2.010;
	tablaBonos[6].bonoXKg = 1.130;
	tablaBonos[6].gananciaDiaria = 53.10;
	tablaBonos[6].peso = 2973;

	tablaBonos[7].indiceDeConversion = 2.020;
	tablaBonos[7].bonoXKg = 1.110;
	tablaBonos[7].gananciaDiaria = 53.02;
	tablaBonos[7].peso = 2969;

	tablaBonos[8].indiceDeConversion = 2.030;
	tablaBonos[8].bonoXKg = 1.090;
	tablaBonos[8].gananciaDiaria = 52.94;
	tablaBonos[8].peso = 2964;

	tablaBonos[9].indiceDeConversion = 2.040;
	tablaBonos[9].bonoXKg = 1.070;
	tablaBonos[9].gananciaDiaria = 52.86;
	tablaBonos[9].peso = 2960;

	tablaBonos[10].indiceDeConversion = 2.050;
	tablaBonos[10].bonoXKg = 1.050;
	tablaBonos[10].gananciaDiaria = 52.78;
	tablaBonos[10].peso = 2956;

	tablaBonos[11].indiceDeConversion = 2.060;
	tablaBonos[11].bonoXKg = 1.030;
	tablaBonos[11].gananciaDiaria = 52.70;
	tablaBonos[11].peso = 2951;

	tablaBonos[12].indiceDeConversion = 2.070;
	tablaBonos[12].bonoXKg = 1.010;
	tablaBonos[12].gananciaDiaria = 52.62;
	tablaBonos[12].peso = 2947;

	tablaBonos[13].indiceDeConversion = 2.080;
	tablaBonos[13].bonoXKg = 0.990;
	tablaBonos[13].gananciaDiaria = 52.54;
	tablaBonos[13].peso = 2942;

	tablaBonos[14].indiceDeConversion = 2.090;
	tablaBonos[14].bonoXKg = 0.970;
	tablaBonos[14].gananciaDiaria = 52.46;
	tablaBonos[14].peso = 2938;

	tablaBonos[15].indiceDeConversion = 2.100;
	tablaBonos[15].bonoXKg = 0.950;
	tablaBonos[15].gananciaDiaria = 52.38;
	tablaBonos[15].peso = 2933;

	tablaBonos[16].indiceDeConversion = 2.110;
	tablaBonos[16].bonoXKg = 0.930;
	tablaBonos[16].gananciaDiaria = 52.30;
	tablaBonos[16].peso = 2929;

	tablaBonos[17].indiceDeConversion = 2.120;
	tablaBonos[17].bonoXKg = 0.910;
	tablaBonos[17].gananciaDiaria = 52.22;
	tablaBonos[17].peso = 2924;

	tablaBonos[18].indiceDeConversion = 2.130;
	tablaBonos[18].bonoXKg = 0.890;
	tablaBonos[18].gananciaDiaria = 52.14;
	tablaBonos[18].peso = 2920;

	tablaBonos[19].indiceDeConversion = 2.140;
	tablaBonos[19].bonoXKg = 0.870;
	tablaBonos[19].gananciaDiaria = 52.06;
	tablaBonos[19].peso = 2916;
	
	tablaBonos[20].indiceDeConversion = 2.150;
	tablaBonos[20].bonoXKg = 0.850;
	tablaBonos[20].gananciaDiaria = 51.98;
	tablaBonos[20].peso = 2911;

	tablaBonos[21].indiceDeConversion = 2.160;
	tablaBonos[21].bonoXKg = 0.830;
	tablaBonos[21].gananciaDiaria = 51.91;
	tablaBonos[21].peso = 2907;

	tablaBonos[22].indiceDeConversion = 2.170;
	tablaBonos[22].bonoXKg = 0.810;
	tablaBonos[22].gananciaDiaria = 51.83;
	tablaBonos[22].peso = 2902;

	tablaBonos[23].indiceDeConversion = 2.180;
	tablaBonos[23].bonoXKg = 0.790;
	tablaBonos[23].gananciaDiaria = 51.75;
	tablaBonos[23].peso = 2898;

	tablaBonos[24].indiceDeConversion = 2.190;
	tablaBonos[24].bonoXKg = 0.770;
	tablaBonos[24].gananciaDiaria = 51.67;
	tablaBonos[24].peso = 2893;

	tablaBonos[25].indiceDeConversion = 2.200;
	tablaBonos[25].bonoXKg = 0.750;
	tablaBonos[25].gananciaDiaria = 51.59;
	tablaBonos[25].peso = 2889;

	tablaBonos[26].indiceDeConversion = 2.210;
	tablaBonos[26].bonoXKg = 0.730;
	tablaBonos[26].gananciaDiaria = 51.51;
	tablaBonos[26].peso = 2884;

	tablaBonos[27].indiceDeConversion = 2.220;
	tablaBonos[27].bonoXKg = 0.710;
	tablaBonos[27].gananciaDiaria = 51.43;
	tablaBonos[27].peso = 2880;

	tablaBonos[28].indiceDeConversion = 2.230;
	tablaBonos[28].bonoXKg = 0.690;
	tablaBonos[28].gananciaDiaria = 51.35;
	tablaBonos[28].peso = 2876;

	tablaBonos[29].indiceDeConversion = 2.240;
	tablaBonos[29].bonoXKg = 0.670;
	tablaBonos[29].gananciaDiaria = 51.27;
	tablaBonos[29].peso = 2871;

	tablaBonos[30].indiceDeConversion = 2.250;
	tablaBonos[30].bonoXKg = 0.650;
	tablaBonos[30].gananciaDiaria = 51.19;
	tablaBonos[30].peso = 2867;

	tablaBonos[31].indiceDeConversion = 2.260;
	tablaBonos[31].bonoXKg = 0.630;
	tablaBonos[31].gananciaDiaria = 51.11;
	tablaBonos[31].peso = 2862;

	tablaBonos[32].indiceDeConversion = 2.270;
	tablaBonos[32].bonoXKg = 0.610;
	tablaBonos[32].gananciaDiaria = 51.03;
	tablaBonos[32].peso = 2858;

	tablaBonos[33].indiceDeConversion = 2.280;
	tablaBonos[33].bonoXKg = 0.590;
	tablaBonos[33].gananciaDiaria = 50.95;
	tablaBonos[33].peso = 2853;

	tablaBonos[34].indiceDeConversion = 2.290;
	tablaBonos[34].bonoXKg = 0.570;
	tablaBonos[34].gananciaDiaria = 50.87;
	tablaBonos[34].peso = 2849;

	tablaBonos[35].indiceDeConversion = 2.300;
	tablaBonos[35].bonoXKg = 0.550;
	tablaBonos[35].gananciaDiaria = 50.79;
	tablaBonos[35].peso = 2844;

	tablaBonos[36].indiceDeConversion = 2.310;
	tablaBonos[36].bonoXKg = 0.530;
	tablaBonos[36].gananciaDiaria = 50.71;
	tablaBonos[36].peso = 2840;

	tablaBonos[37].indiceDeConversion = 2.320;
	tablaBonos[37].bonoXKg = 0.510;
	tablaBonos[37].gananciaDiaria = 50.64;
	tablaBonos[37].peso = 2836;

	tablaBonos[38].indiceDeConversion = 2.330;
	tablaBonos[38].bonoXKg = 0.490;
	tablaBonos[38].gananciaDiaria = 50.56;
	tablaBonos[38].peso = 2831;

	tablaBonos[39].indiceDeConversion = 2.340;
	tablaBonos[39].bonoXKg = 0.470;
	tablaBonos[39].gananciaDiaria = 50.48;
	tablaBonos[39].peso = 2827;

	tablaBonos[40].indiceDeConversion = 2.350;
	tablaBonos[40].bonoXKg = 0.450;
	tablaBonos[40].gananciaDiaria = 50.40;
	tablaBonos[40].peso = 2822;

	tablaBonos[41].indiceDeConversion = 2.360;
	tablaBonos[41].bonoXKg = 0.430;
	tablaBonos[41].gananciaDiaria = 50.32;
	tablaBonos[41].peso = 2818;

	tablaBonos[42].indiceDeConversion = 2.370;
	tablaBonos[42].bonoXKg = 0.410;
	tablaBonos[42].gananciaDiaria = 50.24;
	tablaBonos[42].peso = 2813;

	tablaBonos[43].indiceDeConversion = 2.380;
	tablaBonos[43].bonoXKg = 0.390;
	tablaBonos[43].gananciaDiaria = 50.16;
	tablaBonos[43].peso = 2809;

	tablaBonos[44].indiceDeConversion = 2.390;
	tablaBonos[44].bonoXKg = 0.370;
	tablaBonos[44].gananciaDiaria = 50.08;
	tablaBonos[44].peso = 2804;

	tablaBonos[45].indiceDeConversion = 2.400;
	tablaBonos[45].bonoXKg = 0.350;
	tablaBonos[45].gananciaDiaria = 50.00;
	tablaBonos[45].peso = 2800;
}
