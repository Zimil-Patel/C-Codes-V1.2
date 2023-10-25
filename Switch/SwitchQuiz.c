#include<stdio.h>
#define pf printf
#define sf scanf

void main(){

	char selectedOption;
	
	pf("\n1. What is the primary function of an operating system?\n a) Running software applications\n b) Managing hardware resources\n c) Creating user interfaces\n d) Providing internet connectivity");
	pf("\nAnswer : ");
	sf("%c",&selectedOption);
	
	switch(selectedOption){
		
		case 'a':
			pf("Wrong answer, reattempt the test.");
			break;
			
		case 'b':
			pf("Correct Answer!\n");
			pf("\n2. Which computer component stores data and programs even when the computer is powered off?\n a) CPU\n b) RAM\n c) Hard Drive\n d) Monitor");
			pf("\nAnswer : ");
			sf("%c",&selectedOption);
			sf("%c",&selectedOption);
			
			switch(selectedOption){
		
				case 'a':
					pf("Wrong answer, reattempt the test.");
					break;
					
				case 'b':
					pf("Wrong answer, reattempt the test.");
					break;
					
				case 'c':
					pf("Correct Answer!\n");
					pf("\n3. What does CPU stand for?\n a) Central Processing Unit\n b) Computer Peripheral Unit\n c) Control Processing Unit\n d) Central Program Unit");
					pf("\nAnswer : ");
					sf("%c",&selectedOption);
					sf("%c",&selectedOption);
					switch(selectedOption){
		
						case 'a':
							pf("Correct Answer!\n");
							pf("\n4. Which computer programming language is often used for web development?\n a) C++\n b) Java\n c) HTML\n d) Python");
							pf("\nAnswer : ");
							sf("%c",&selectedOption);
							sf("%c",&selectedOption);
							switch(selectedOption){
		
								case 'a':
									pf("Wrong answer, reattempt the test.");
									break;
									
								case 'b':
									pf("Wrong answer, reattempt the test.");
									break;
									
								case 'c':
									pf("Correct Answer!\n");
									pf("\n5. Which storage device is known for its high-speed data access but is volatile (loses data when power is off)?\n a) Hard Drive\n b) USB Flash Drive\n c) CD-ROM\n d) RAM");
									pf("\nAnswer : ");
									sf("%c",&selectedOption);
									sf("%c",&selectedOption);
									switch(selectedOption){
		
										case 'a':
											pf("Wrong answer, reattempt the test.");
											break;
											
										case 'b':
											pf("Wrong answer, reattempt the test.");
											break;
											
										case 'c':
											pf("Wrong answer reattempt the test.");
											break;
											
										case 'd':
											pf("Correct Answer!\n");
											pf("\n6. What does GUI stand for in computing?\n a) Graphical User Interface\n b) General User Interaction\n c) Global Utility Integration\n d) Graphical Utility Interface");
											pf("\nAnswer : ");
											sf("%c",&selectedOption);
											sf("%c",&selectedOption);
											switch(selectedOption){
		
												case 'a':
													pf("Correct Answer!\n");		
													pf("\n7. Which of the following is not a type of computer virus?\n a) Worm\n b) Trojan Horse\n c) Firewall\n d) Spyware");
													pf("\nAnswer : ");
													sf("%c",&selectedOption);
													sf("%c",&selectedOption);
													switch(selectedOption){
		
														case 'a':
															pf("Wrong answer reattempt the test.");										
															break;
															
														case 'b':
															pf("Wrong answer, reattempt the test.");
															break;
															
														case 'c':															
															pf("Correct Answer!\n");
															pf("\n8. What is the process of converting human-readable code into machine code called?\n a) Compilation\n b) Interpretation\n c) Execution\n d) Debugging");
															pf("\nAnswer : ");
															sf("%c",&selectedOption);
															sf("%c",&selectedOption);
															switch(selectedOption){
				
																case 'a':
																	pf("Correct Answer!\n");
																	pf("\n9. Which component of a computer connects the CPU to other parts of the system and manages data transfer?\n a) GPU\n b) Motherboard\n c) Power Supply\n d) Monitor");
																	pf("\nAnswer : ");
																	sf("%c",&selectedOption);
																	sf("%c",&selectedOption);
																	switch(selectedOption){
						
																		case 'a':
																			pf("Wrong answer, reattempt the test.");													
																			break;
																			
																		case 'b':																			
																			pf("Correct Answer!\n");
																			pf("\n10. What is the binary system based on?\n a) Base 2\n b) Base 8\n c) Base 10\n d) Base 16");
																			pf("\nAnswer : ");
																			sf("%c",&selectedOption);
																			sf("%c",&selectedOption);
																			switch(selectedOption){
								
																				case 'a':
																					pf("Correct Answer!\n");
																					pf("\n--Congratulation! your quiz is over--\n");																																		
																					break;
																					
																				case 'b':																			
																					pf("Wrong answer, reattempt the test.");
																					break;
																					
																				case 'c':															
																					pf("Wrong answer reattempt the test.");										
																					break;
																					
																				case 'd':
																					pf("Wrong answer, reattempt the test.");
																					break;
																					
																				default:
																					pf("Invalid option selected, reattempt the test.");										
																					break;
														
																			}	
																			break;
																			
																		case 'c':															
																			pf("Wrong answer reattempt the test.");										
																			break;
																			
																		case 'd':
																			pf("Wrong answer, reattempt the test.");
																			break;
																			
																		default:
																			pf("Invalid option selected, reattempt the test.");										
																			break;
												
																	}																	
																	break;
																	
																case 'b':
																	pf("Wrong answer, reattempt the test.");
																	break;
																	
																case 'c':															
																	pf("Wrong answer reattempt the test.");										
																	break;
																	
																case 'd':
																	pf("Wrong answer, reattempt the test.");
																	break;
																	
																default:
																	pf("Invalid option selected, reattempt the test.");										
																	break;
										
															}	
															break;
															
														case 'd':
															pf("Wrong answer, reattempt the test.");
															break;
															
														default:
															pf("Invalid option selected, reattempt the test.");										
															break;
								
													}								
													break;
													
												case 'b':
													pf("Wrong answer, reattempt the test.");
													break;
													
												case 'c':
													pf("Wrong answer reattempt the test.");
													break;
													
												case 'd':
													pf("Wrong answer, reattempt the test.");
													break;
													
												default:
													pf("Invalid option selected, reattempt the test.");										
													break;
						
											}
											break;
											
										default:
											pf("Invalid option selected, reattempt the test.");										
											break;
				
									}
									break;
									
								case 'd':
									pf("Wrong answer reattempt the test.");
									break;
									
								default:
									pf("Invalid option selected, reattempt the test.");
									break;
				
							}
							break;
							
						case 'b':
							pf("Wrong answer, reattempt the test.");
							break;
							
						case 'c':
							pf("Wrong answer, reattempt the test.");
							break;
							
						case 'd':
							pf("Wrong answer reattempt the test.");
							break;
							
						default:
							pf("Invalid option selected, reattempt the test.");
							break;
				
					}
					break;
					
				case 'd':
					pf("Wrong answer reattempt the test.");
					break;
					
				default:
					pf("Invalid option selected, reattempt the test.");
					break;
		
			}
			break;
			
		case 'c':
			pf("Wrong answer, reattempt the test.");
			break;
			
		case 'd':
			pf("Wrong answer reattempt the test.");
			break;
			
		default:
			pf("Invalid option selected, reattempt the test.");
			break;
	
	}
	

}