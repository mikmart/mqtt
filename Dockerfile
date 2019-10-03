FROM rocker/tidyverse

RUN sudo apt-get update && sudo apt-get install -y \
    libmosquitto-dev libmosquittopp-dev
RUN Rscript -e "remotes::install_github('hrbmstr/mqtt')"
