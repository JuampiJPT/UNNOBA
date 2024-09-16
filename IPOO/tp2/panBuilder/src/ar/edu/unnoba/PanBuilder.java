
    package ar.edu.unnoba;

    public abstract class PanBuilder {
        private boolean temperatura;
        private boolean aguaConSal;
        private boolean aguaYMezclar;
        private boolean harinaYRemover;
        private boolean amasar;
        private boolean reposar;
        private boolean cortarMasa;
        private boolean llevarAlHorno;

        public PanBuilder() {
            setTemperatura(false);
            setAguaConSal(false);
            setAguaYMezclar(false);
            setHarinaYRemover(false);
            setAmasar(false);
            setReposar(false);
            setCortarMasa(false);
            setLlevarAlHorno(false);
        }


        public void comprobarTemperatura(){
            setTemperatura(true);
        }
        public void prepararAguaConSal(){
            setAguaConSal(true);
        }
        public void aniadirAguaYMezclar(){
            setAguaYMezclar(true);
        }
        public void aniadirHarinaYRemover(){
            setHarinaYRemover(true);
        }
        public void amasar(){
            setAmasar(true);
        }
        public void dejarReposar(){
            setReposar(true);
        }
        public void cortarMasa(){
            setCortarMasa(true);
        }
        public void llevarAlHorno(){
            setLlevarAlHorno(true);
        }
        public abstract Pan getPan();

        public boolean isTemperatura() {
            return temperatura;
        }

        public void setTemperatura(boolean temperatura) {
            this.temperatura = temperatura;
        }

        public boolean isAguaConSal() {
            return aguaConSal;
        }

        public void setAguaConSal(boolean aguaConSal) {
            this.aguaConSal = aguaConSal;
        }

        public boolean isAguaYMezclar() {
            return aguaYMezclar;
        }

        public void setAguaYMezclar(boolean aguaYMezclar) {
            this.aguaYMezclar = aguaYMezclar;
        }

        public boolean isHarinaYRemover() {
            return harinaYRemover;
        }

        public void setHarinaYRemover(boolean harinaYRemover) {
            this.harinaYRemover = harinaYRemover;
        }

        public boolean isAmasar() {
            return amasar;
        }

        public void setAmasar(boolean amasar) {
            this.amasar = amasar;
        }

        public boolean isReposar() {
            return reposar;
        }

        public void setReposar(boolean reposar) {
            this.reposar = reposar;
        }

        public boolean isCortarMasa() {
            return cortarMasa;
        }

        public void setCortarMasa(boolean cortarMasa) {
            this.cortarMasa = cortarMasa;
        }

        public boolean isLlevarAlHorno() {
            return llevarAlHorno;
        }

        public void setLlevarAlHorno(boolean llevarAlHorno) {
            this.llevarAlHorno = llevarAlHorno;
        }
    }

