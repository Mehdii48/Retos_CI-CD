# Challenge 10 - Dockerize C Application
FROM gcc:latest AS builder

# Metadatos
LABEL maintainer="Mehdii48"
LABEL version="1.0"
LABEL description="Aplicación C dockerizada"

# Configurar entorno
WORKDIR /app

# Copiar código fuente
COPY . .

# Compilar aplicación y pruebas
RUN make build && make test

# Etapa final (imagen más pequeña)
FROM alpine:latest AS runtime

# Instalar solo lo necesario para ejecutar
RUN apk add --no-cache libgcc

# Copiar el binario desde la etapa de compilación
COPY --from=builder /app/app /usr/local/bin/app

# Metadatos
LABEL maintainer="Mehdii48"
LABEL version="1.0"

# Punto de entrada
ENTRYPOINT ["app"]

# Comando por defecto (puede ser sobrescrito)
CMD ["--help"]