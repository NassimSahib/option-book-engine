# Option Book Engine

🧠 Real-time multi-threaded option book simulator in C++.

This project simulates a live options trading environment using tick-level market data and computes dynamic pricing and risk metrics (Delta, Vega, P&L) using a custom-built pricing engine.

## 🔧 Features

- Multi-threaded architecture: MarketData, Pricing, Risk, UI
- Option pricing via Black-Scholes (calls and puts)
- Dynamic Delta/Vega calculation
- Simulated data feed (SPX + volatility from CSV)
- Modular architecture, scalable to live trading

## 🧱 Architecture

- `MarketDataSimulator`: feeds ticks into the engine
- `Option`: represents a vanilla option
- `PricingEngine`: computes BS price + Greeks
- `RiskEngine`: aggregates risk exposures
- `ThreadManager`: synchronizes all live components

## 🧪 Next Features

- Order input engine (simulated trades)
- Realistic vol surface interpolation
- Position hedging / rebalancing
- Backtest mode + benchmarking

## 📁 Folder Structure

