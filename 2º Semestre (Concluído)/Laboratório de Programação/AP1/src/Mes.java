public class Mes {
    public static String meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    public static String months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};


    public static String getMes (int mes) {
        mes = mes - 1;
        if(mes >= 0 && mes < 12) {
            return meses[mes];
        }else {
            return "Mês inválido!";
        }
    }

    public static String getMonths (int mes) {
        mes = mes - 1;
        if(mes >= 0 && mes < 12) {
            return months[mes];
        }else {
            return "Mês inválido!";
        }
    }


    public static String getMesExtenso(int i, int mes) {
        if(i == 1) {
            return getMes(mes);
        }
        if(i == 2) {
            return getMonths(mes);
        }

        return "Idioma não corresponde!";
    }
}