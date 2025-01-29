ARG DOCKER_GID=1001  # MUST match your host's Docker group ID
FROM mcr.microsoft.com/devcontainers/python:3.11

# Install system dependencies
RUN apt-get update && apt-get install -y \
    curl \
    build-essential \
    && apt-get clean && rm -rf /var/lib/apt/lists/*

# Install tree-sitter-cli via npm
RUN curl -fsSL https://deb.nodesource.com/setup_18.x | bash - \
    && apt-get install -y nodejs \
    && npm install -g tree-sitter-cli

# Install pip tools globally
RUN pip install --no-cache-dir pipenv

# Docker group synchronization (Fix for invalid GID issue)
ARG DOCKER_GID
RUN if [ -z "$DOCKER_GID" ] || ! echo "$DOCKER_GID" | grep -qE '^[0-9]+$'; then \
      echo "ERROR: DOCKER_GID is not a valid number" && exit 1; \
    fi && \
    if getent group docker >/dev/null; then \
      groupmod -g "$DOCKER_GID" docker; \
    else \
      groupadd -g "$DOCKER_GID" docker; \
    fi && \
    usermod -aG docker vscode

# Verify setup
RUN echo "Docker GID: $(getent group docker | cut -d: -f3)" && \
    groups vscode

# Install Docker CLI
RUN apt-get update && apt-get install -y \
    docker.io \
    && apt-get clean && rm -rf /var/lib/apt/lists/*
